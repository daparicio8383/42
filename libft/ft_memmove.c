/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 07:53:14 by davapari          #+#    #+#             */
/*   Updated: 2024/04/11 06:52:33 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ds;
	char	*buf;
	size_t	i;

	ds = (char *)dest;
	buf = (char *)src;
	if (src > dest)
	{
		while (n > 0)
		{
			ds[n - 1] = buf[n - 1];
			n--;
		}
		return (dest);
	}
	else
	{
		while (i < n)
		{
			ds[i] = buf[i];
			i++;
		}
		return (dest);
	}
}
