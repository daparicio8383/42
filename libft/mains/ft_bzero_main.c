/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 07:12:59 by davapari          #+#    #+#             */
/*   Updated: 2024/04/15 06:09:33 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	char	*st;
	size_t i;

	st = (char *)s;
	i = 0;
	while (i < n)
	{
		st[i] = '\0';
		i++;
	}
}

int	main()
{
	char	str[50] = "Hola qué tal";
	size_t	t;
	char	str2[50] = "Hola qué tal";
	
	t = 5;
	ft_bzero(str, t);
	bzero(str2, t);
	printf("ft_bzero: %s\n\n", str + t);
	printf("bzero: %s\n\n", str2 + t);
	return (0);
}

/* DESCRIPTION
       The bzero() function erases the data in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes
       containing '\0') to that area.

       No return value.

En printf, se define 'str+t' como argumento porque si no, dejará de imprimir al encontrarse un cero */
