/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 06:07:54 by davapari          #+#    #+#             */
/*   Updated: 2024/04/24 08:19:37 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if ((*(unsigned char *)(s1 + i)) != (*(unsigned char *)(s2 + i)))
			return ((*(unsigned char *)(s1 + i)) - 
					(*(unsigned char *)(s2 + i)));
		i++;
	}
	return (0);
}
int	main()
{
	const char	*s1 = "H";
	const char	*s2 = "h";
	size_t	n;

	const char	*s3 = "H";
	const char	*s4 = "h";
	size_t	n2;

	n = 3;
	n2 = 3;
	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, n));
	printf("memcmp: %d\n", memcmp(s3, s4, n2));
	return (0);
}

/*
 * DESCRIPTION
       The memcmp() function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.
 *
 *RETURN VALUE
       The memcmp() function returns an integer less than, equal to, or greater than zero if the first n bytes of s1 is found,
       respectively, to be less than, to match, or be greater than the first n bytes of s2.

       For a nonzero return value, the sign is determined by the sign of the difference between the first pair of bytes
       (interpreted as unsigned char) that differ in s1 and s2.

       If n is zero, the return value is zero.
 *
 *
 *
 */
