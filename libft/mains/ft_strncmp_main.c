/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 06:49:33 by davapari          #+#    #+#             */
/*   Updated: 2024/04/24 07:14:15 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 && *s2) && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			return (0);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

int	main()
{
	const char	s1[20] = "A";
	const char	s2[20] = "a";
	size_t	n;

	n = 3;

	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
	printf("strncmp: %d\n", strncmp(s1, s2, n));
	return (0);
}

/*
 *DESCRIPTION & RRETURN VALUE
       The  strcmp() function compares the two strings s1 and s2. It returns an integer less than, equal to, 
       or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2.
	
       The strncmp() function is similar, except it compares only the first (at most) n bytes of s1 and s2.
 *
 *
 *
 *
 */
