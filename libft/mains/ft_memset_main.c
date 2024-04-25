/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 06:17:35 by davapari          #+#    #+#             */
/*   Updated: 2024/04/12 08:28:38 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;
	
	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}	
	return(s);
}

int	main()
{
	unsigned char	st[50] = "Hola qué tal vas";
	int	ch;
	size_t	t;
	char	*ret1;
	char	*ret2;

	ch = 36;
	t = 4;
	ret1 = ft_memset(st, ch, t);
	ret2 = memset(st, ch, t);
	printf("ft_memset: %s\n\n", ret1);
	printf("Con memset: %s\n\n", ret2);
	return (0);
}

/*
 * DESCRIPTION
       The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.
 *
 * RETURN VALUE
       The memset() function returns a pointer to the memory area s.
 
El bucle while itera mientras i sea menor que n, que es el número de bytes que se deben llenar.

Se usa unsigned char para asegurarse de los valores de c se almacenen correctamente en cada byte de memoria, sin importar si c es negativo.
Esto se explica en el llamado \"Complemento a dos\". 

Resumiendo y aplicando a los tipos de dato en C, cuando utilizamos CHAR, utilizamos 1+7 bits por cada número, siendo el bit de más a la 
izquierda el encargado de definir el signo de la representación decimal del CHAR. 2⁷ es 256, por lo que los CHAR representados serán 
los ASCII que van del -128 al 127.

En el caso de los UNSIGNED CHAR, tendremos disponibles los 8 bits de su valor decimal, por lo que el rango de valores ASCII que podrá 
tomar irá del 0 al 255. Aunque no aplica a este ejercicio, esta forma de representación es útil para tratar con octetos, valores hex, etc...

 */
