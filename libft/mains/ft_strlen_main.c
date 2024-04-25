/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 08:35:31 by davapari          #+#    #+#             */
/*   Updated: 2024/04/12 07:17:03 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

int	main(void)
{
	char *str;
       
	str = "Hola mundo";
	printf("\nCon ft_strlen: %zu\n\n", ft_strlen(str));
	printf("Con strlen: %zu\n\n", strlen(str));
	return (0);
}

/*
 * DESCRIPTION
       The strlen() function calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').
 *
 *RETURN VALUE
       The strlen() function returns the number of bytes in the string pointed to by s.
 */
