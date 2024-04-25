/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 07:03:31 by davapari          #+#    #+#             */
/*   Updated: 2024/04/12 07:14:44 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}

int	main()
{
	printf("\n%d\n\n", ft_isprint(230));
	return (0);
}

/*
 * DESCRIPTION
 *	checks for any printable character including space.
 *
 * RETURN VALUE
       The values returned are nonzero if the character c falls into the tested class, and zero if not.
 *
 */
