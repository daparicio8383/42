/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 06:15:56 by davapari          #+#    #+#             */
/*   Updated: 2024/04/25 06:27:45 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	char	*st;
	size_t i;

	st = (char *)s;
	i = 0;
	while (i < n)
	{
		st[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, num);
	return (ptr);
}

int	main()
{
	void	*ptr_ft_calloc;
	void	*ptr_calloc;
	
	ptr_ft_calloc = ft_calloc(2,3);
	ptr_calloc = calloc(2,3);
	printf("Con ft_calloc: %p\n", ptr_ft_calloc);
	printf("Con calloc: %p\n", ptr_calloc);
	free(ptr_ft_calloc);
	free(ptr_calloc);
	return (0);
}

// ft_calloc() señala la cantidad de bytes que se quiere reservar, teniendo en
// cuenta la cantidad de elementos que habrá en ese espacio (num) y el tamaño
// en bytes de cada elemento (size).
//
// ft_bzero() elimina todos los datos de los n primeros bytes de memoria y escribe
// ceros en ese áre. En este caso, ft_bzero() eliminará los datos de los 'num' primeros
// bytes de memoria de ptr.

// void	*ft_calloc() indica que es un puntero a un tipo no especificado de dato
//
// Sintácticamente, se usará de la siguiente manera:

// int main()
// {
//	int n;
//	int *p;
//
//	n=10;
//	p = (int *) ft_calloc((n)*sizeof(int))
// }
//
// Con (int *) lo que hacemos es el type-casting o casteo. Al no haber especificado
// un tipo de dato para el puntero, se especifica que es a un entero.
