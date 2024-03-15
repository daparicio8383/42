/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 09:33:25 by davapari          #+#    #+#             */
/*   Updated: 2024/03/15 09:34:28 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size > 0)
	{
		while (i < size && dst[i])
			i++;
		while (((i + j) < size - 1) && src[j])
		{
			dst[i + j] = src[j];
			j++;
		}
		if ((i + j) < size)
		{
			dst[i + j] = '\0';
		}
	}
	while (src[j])
		j++;
	return (i + j);
}
