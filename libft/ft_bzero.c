/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 07:12:59 by davapari          #+#    #+#             */
/*   Updated: 2024/04/11 06:46:38 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*st;
	size_t	i;

	st = (char *)s;
	i = 0;
	while (i < n)
	{
		st[i] = '\0';
		i++;
	}
}
/* En el main, en printf, se define 'str+t' como argumento porque si no,
 * dejará de imprimir al encontrarse un cero */
