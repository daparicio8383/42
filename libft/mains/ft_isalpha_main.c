/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 05:44:27 by davapari          #+#    #+#             */
/*   Updated: 2024/04/12 07:08:14 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int character)
{
	if ((character >= 65 && character <= 90)
			|| (character >= 97 && character <= 122))
		return (character);
	else
		return (0);
}

int	main(void)
{
	char	str;

	str = '7';
	printf("\nCon ft_isaplha: %d\n\n", ft_isalpha(str));
	printf("Con isalpha: %d\n\n", isalpha(str));
	return (0);
}

/*       DESCRIPTION       
 *
 *       isalpha()
              checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || islower(c)). 
	      In some locales, there may be additional characters for which isalpha() is true—letters which are neither uppercase nor lowercase.

	 RETURN VALUE
		The values returned are nonzero if the character c falls into the tested class, and zero if not.
*/

