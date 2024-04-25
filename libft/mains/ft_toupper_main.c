/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 10:11:45 by davapari          #+#    #+#             */
/*   Updated: 2024/04/24 06:37:44 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c > 'a' && c < 'z')
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}

int	main()
{
	int	c;

	c = 'c';
	printf("ft_toupper: %d\n", ft_toupper(c));
	return (0);
}

/*
 * DESCRIPTION
 * 	If c is a lowercase letter, toupper() returns its uppercase equivalent, if an uppercase representation exists
 * 	in the current locale.  Otherwise, it returns c.
 *
 * RETURN
 *	The value returned is that of the converted letter, or c if the conversion was not possible.
 *
 */
