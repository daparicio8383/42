/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 08:00:25 by davapari          #+#    #+#             */
/*   Updated: 2024/04/11 06:58:52 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
