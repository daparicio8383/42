/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 07:53:14 by davapari          #+#    #+#             */
/*   Updated: 2024/04/15 06:19:47 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ds;
	char	*sr;

	i = 0;
	ds = (char *)dest;
	sr = (char *)src;
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dest);
}
