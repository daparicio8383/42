/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 09:22:27 by davapari          #+#    #+#             */
/*   Updated: 2024/03/17 09:29:14 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s != (char) c)
			s++;
		else
			return ((char *)s);
	}
	if (*s == (char) c)
	{
		return ((char *)s); 
	}
	else
		return (NULL);
}
