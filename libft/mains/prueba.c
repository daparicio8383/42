/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:30:21 by davapari          #+#    #+#             */
/*   Updated: 2024/03/15 08:16:26 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)

{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = 0;
	res = 0;
	while (dst[i] != '\0')
		i++;
	while (src[res] != '\0')
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
}
// utlizo <bsd/string.h> ya que strlcpy es una función nativa de sistemas BSD.
// Para compilar: gcc -W -W -W ft_xxx -lbsd

