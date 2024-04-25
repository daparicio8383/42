/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 05:44:27 by davapari          #+#    #+#             */
/*   Updated: 2024/04/12 07:11:28 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int character)
{
	if (character >= 48 && character <= 57)
		return (character);
	else
		return (0);
}

int	main(void)
{
	char	str;

	str = 'a';
	printf("\nCon ft_isdigit: %d\n\n", ft_isdigit(str));
	printf("Con isdigit: %d\n\n", isdigit(str));
	return (0);
}

/*
 *
 * DESCRIPTION
 *	checks for a digit (0 through 9).
 *
 *RETURN VALUE
       The values returned are nonzero if the character c falls into the tested class, and zero if not.
 */
