/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 08:16:40 by davapari          #+#    #+#             */
/*   Updated: 2024/04/12 07:13:06 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int character)
{
	if (character >= 0 && character <= 127)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	str;

	//str = 'A';
	str = 128;
	printf("\nCon ft_isascii: %d\n\n", ft_isascii(str));
	printf("Con isascii: %d\n\n", isascii(str));
	return (0);
}

/*
 * DESCRIPTION
 *	checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
 *
 * RETURN VALUE
       The values returned are nonzero if the character c falls into the tested class, and zero if not.
 */
