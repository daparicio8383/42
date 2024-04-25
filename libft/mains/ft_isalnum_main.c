/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 06:54:25 by davapari          #+#    #+#             */
/*   Updated: 2024/04/12 07:10:01 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122))
		return (c);
	else
		return (0);
}

int	main(void)
{
	char str;

	str = 'a';
	printf("\nCon ft_isalnum: %d\n\n", ft_isalnum(str));
	printf("\nCon isalnum: %d\n\n", isalnum(str));
	return (0);
}

/*
 * DESCRIPTION
 *	checks for an alphanumeric character
 *
 * RETURN VALUE
       The values returned are nonzero if the character c falls into the tested class, and zero if not.
 *
 */
