/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 08:37:08 by davapari          #+#    #+#             */
/*   Updated: 2024/04/11 06:58:31 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if ((char)little[i] == '\0')
		return ((char *)big);
	while (i < len && *big && *little)
	{
		if (big[i] != little[j])
			i++;
		else
		{
			if (big[i] == little[j])
			{
				i++;
				j++;
			}
			return ((char *)(big + i - j));
		}
	}
	return (NULL);
}
