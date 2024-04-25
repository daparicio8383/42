/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_main2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 06:21:06 by davapari          #+#    #+#             */
/*   Updated: 2024/04/16 07:10:19 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && (i < size - 1))
			{
				dst[i] = src[i];
				i++;
			}
		dst[i] = '\0';
	}
	while (src[i])
	{
		i++;
	}
	return (i);

}
int	main()
{
	char	ds[50] = "bbb";
	const char	sr[50] = "Hola mundo";
	size_t	sz;

	sz = 6;
	printf("\nCon ft_strlcpy: %zu\n\n", ft_strlcpy(ds, sr, sz));
	printf("Con strlcpy: %zu\n\n", strlcpy(ds, sr, sz));
	return (0);
}
// utlizo <bsd/string.h> ya que strlcpy es una función nativa de sistemas BSD.
// Para compilar: gcc -W -W -W ft_xxx -lbsd

/*
 * DESCRIPTION
 * 	The kernel has a number of strcpy() functions that copy a string from one pointer to another.
 *
 * 	strlcpy() will not overflow the destination buffer and it always adds a NUL terminator. However
 * 	it doesn’t pad the string with zeros. But the main thing wrong with strlcpy() is that it does a 
 * 	strlen() on the src string. So if the src string is not NULL terminated then you can end up 
 * 	reading beyond the end of the buffer. If you get really unlucky then the memory beyond the end 
 * 	of the buffer might not be mapped and the kernel would Oops.
 *
 * RETURN VALUES
     The strlcpy() function return the total length of the string they tried to create, that means the length of src.
 *
 * ft_strlcpy devuelve un tamaño size_t y toma tres argumentos: un puntero dst al destino de la copia, un puntero src 
 * al origen de la copia y un tamaño size que representa el tamaño máximo de la cadena de destino.
 *
 * Primero se verifica si size > 0 para evitar un posible desbordamiento de búfer. Luego, se copian caracteres de src a dst 
 * hasta que se alcance el final de la cadena src o el tamaño máximo size - 1 del destino dst. Esto garantiza que 
 * la cadena de destino esté terminada con el carácter nulo \0. Finalmente, se agrega el carácter nulo \0 al final del destino dst.
 */
