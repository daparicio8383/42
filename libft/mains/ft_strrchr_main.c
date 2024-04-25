/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 09:32:26 by davapari          #+#    #+#             */
/*   Updated: 2024/04/24 07:06:15 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	while (*(s + 1) != '\0')
		s++;
	while (*s)
	{
		if (*s != (char) c)
			s--;
		else
			return ((char *)s);
	}
	if (*s == (char) c)
		return ((char *) s);
	else
		return (NULL);
}

int	main()
{
	const char	*s;
	int	c;

	s = "pepito";
	c = '\0';
	printf("Con ft_strrchr: %s\n", ft_strrchr(s, c));
	printf("Con strrchr: %s\n", strrchr(s, c));
	return (0);
}

/*
 *DESCRIPTION
 *     The strrchr() function returns a pointer to the last occurrence of the character c in the string s.
 *
 *RETURN VALUE
 *     The  strchr()  and strrchr() functions return a pointer to the matched character or NULL if the character
 *     is not found.  The terminating null byte is considered part of the string, so that if c is specified as '\0',
 *     these functions return a pointer to the terminator.
 *
 *CÓDIGO
 *	- El primer bucle while avanza el puntero s hasta que apunta al último carácter de la cadena ('\0'). 
  	Esto se logra mediante el incremento del puntero s hasta que el siguiente carácter (*(s + 1)) sea el carácter nulo ('\0').
	- El resto es lo mismo que ft_strchr, compara caracteres y decrementa.
 */

