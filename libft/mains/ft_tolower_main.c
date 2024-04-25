/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 10:31:30 by davapari          #+#    #+#             */
/*   Updated: 2024/04/24 06:39:45 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
		return (c);
	}
	else
		return (c);
}

int	main()
{
	int	c;

	c = 'Z';
	printf("%d\n", ft_tolower(c));
	return (0);
}

/*
 *DESCRIPTION
 *	If c is an uppercase letter, tolower() returns its lowercase equivalent, if a lowercase representation
 *	exists in the current locale.  Otherwise, it returns c.
 *
 *RETURN VALUE
 *     The value returned is that of the converted letter, or c if the conversion was not possible
 *
 */
