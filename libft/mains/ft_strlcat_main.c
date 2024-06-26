/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:30:21 by davapari          #+#    #+#             */
/*   Updated: 2024/04/24 06:33:52 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	if (size == 0)
		return (src_len);
	if (size < dst_len)
		return (src_len + size);
	else
	{
		while (src[j] && (dst_len + j) < size)
			dst[i++] = src[j++];
		if ((dst_len + j) == size && dst_len < size)
			dst[--i] = '\0';
		else
			dst[i] = '\0';
		return (src_len + dst_len);
	}
}

int	main()
{
	char	ds[15] = "bbbbbb";
	const char	sr[15] = "aaaaaaa";
	char	d[15] = "bbbbbb";
	const char	s[15] = "aaaaaaa";
	size_t	sz;
	size_t	a;
	size_t	b;

	sz = 5;
	a = ft_strlcat(ds, sr, sz);
	b = strlcat(d, s, sz);
	printf("%zu\n", a);
	printf("%zu\n", b);
	return (0);
}
// utlizo <bsd/string.h> ya que strlcpy es una función nativa de sistemas BSD.
// Para compilar: gcc -W -W -W ft_xxx -lbsd

/*
 *
 *DESCRIPCIÓN
 	Strlcat() concatena cadenas de caracteres en dst.
 *
 *RETORNO
 *	strlcat() functions return the total length of the string they tried to create. For strlcat() that
     	means the initial length of dst plus the length of src.
 *
 * El parámetro "size" representa el tamaño del búfer de destino (tamaño máximo de la string resultante después
 * de la concatenación).
 *
 * El valor de retorno representa el tamaño de la string resultante, incluyendo el carácter nulo. 
 *
 *CÓDIGO
 *	- Se determinan las longitudes de src y dst
 *	- Si size es 0, se retornará la longitud de src
 *	- Si size < longitud de dest, se retornará src_len + size
 *	- Bucle while
 *		- Mientras src[j] no sea nulo y (dst_len + j) < size --> copia src en dst, incremento de i, j
 *	- Después del bucle
 *		- Si la suma de dst_len y la posición final en src (j) es igual al tamaño máximo (size) y dst_len < size, significa 
 *		que la cadena destino (dst) se ha llenado justo hasta su límite. En este caso, se retrocede un índice (--i) en dst 
 *		y se agrega el carácter nulo ('\0'). Esto asegura que dst tenga el carácter nulo al final
 *		- Si no se cumple la condición anterior, se agrega '\0' a dst y listo
 */
