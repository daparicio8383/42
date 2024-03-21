/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 06:04:37 by davapari          #+#    #+#             */
/*   Updated: 2024/03/21 06:05:28 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)(s))[i] != (unsigned char)c)
			i++;
		else
		{
			return ((void *)((unsigned char *)s) + i);
		}
	}
	return (NULL);
}
