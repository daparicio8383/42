/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 09:33:25 by davapari          #+#    #+#             */
/*   Updated: 2024/04/22 06:44:45 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	tot_size;

	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	tot_size = dst_len + ft_strlen(src);
	while (dst[i] != '\0' && i < size)
	{
		i++;
	}
	while (src[j] != '\0' && i + j + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dst[i + j] = '\0';
	}
	return (tot_size);
}
