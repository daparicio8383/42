/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 06:39:40 by davapari          #+#    #+#             */
/*   Updated: 2024/03/18 06:39:47 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	while (*(s + 1) != '\0')
		s++;
	while (*s)
	{
		if (*s != (char) c)
			s--;
		else
			return ((char *)s);
	}
	if (*s == (char) c)
		return ((char *) s);
	else
		return (NULL);
}
