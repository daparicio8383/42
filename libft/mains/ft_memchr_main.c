/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:41:06 by davapari          #+#    #+#             */
/*   Updated: 2024/04/24 07:28:38 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)(s))[i] != (unsigned char)c)
			i++;
		else
		{
			return ((void *)((unsigned char *)s) + i);
		}
	}
	return (NULL);
}

int	main()
{
	const char *s = "hola que tal";
	int	c;
	size_t	n;

	c = 'a';
	n = 7;
	void *result = ft_memchr(s, c, n);
	if (result != NULL)
	{
		printf("Con ft_memchr: %c\n", *(char *)ft_memchr(s, c, n));
		printf("Con memchr: %c\n", *(char *)memchr(s, c, n));
	}
	else
		printf("El carácter no se encontró con ft_memchr\n");
	return (0);

}

/*
 * DESCRIPTION
       The memchr() function scans the initial n bytes of the memory area pointed to by s for the first instance of c.
       Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.

 RETURN VALUE
       The memchr() and memrchr() functions return a pointer to the matching byte or NULL if the character does not occur in the given memory area.
 *
 *
 * CÓDIGO
 *	- if (((unsigned char *)(s))[i] != (unsigned char)c) --> se convierte el puntero s a un puntero a unsigned char 
 *	mediante el casting (unsigned char *)
 *
 *	- return ((void *)((unsigned char *)s) + i); --> lo primero que hace, con el "+ i" es desplazar el puntero 
 *	a la posición del byte en la que se encontró la coincidencia entre c y el byte en el bloque de memoria.
 *
 *	Luego, dado que la función original devuelve un puntero void (que apunta a cualquier tipo de dato), habrá que hacer el casting
 *	con (void *) (xxx). 
 *
 */
