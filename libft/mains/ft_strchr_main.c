/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 06:42:03 by davapari          #+#    #+#             */
/*   Updated: 2024/04/24 06:54:36 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s != (char) c)
			s++;
		else
			return ((char *)s);
	}
	if (*s == (char) c)
	{
		return ((char *)s); 
	}
	else
		return (NULL);
}

int	main()
{
	const char	*s;
	int	c;

	s = "pepito";
	c = 'e';
	printf("Con ft_strchr: %s\n", ft_strchr(s, c));
	printf("Con strchr: %s\n", strchr(s, c));
	return (0);
}


/*
 *DESCRIPTION
 *     The strchr() function returns a pointer to the first occurrence of the character c in the string s.
 *
 *RETURN VALUE
 *     The  strchr()  and strrchr() functions return a pointer to the matched character or NULL if the character 
 *     is not found.  The terminating null byte is considered part of the string, so that if c is specified as '\0', 
 *     these functions return a pointer to the terminator.
 *
 *CÓDIGO
	- if (*s != (char) c) --> comprueba si el caracter actual en la cadena s no es igual a c
	- Valor de retorno: return ((char *)s); -->  toma el puntero s, que originalmente es un puntero a un
        carácter constante (const char *s), y lo está convirtiendo en un puntero a un carácter no constante (char *).
	Esta conversión se realiza mediante el uso de un casting
 */
