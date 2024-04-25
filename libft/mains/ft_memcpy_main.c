/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 06:41:07 by davapari          #+#    #+#             */
/*   Updated: 2024/04/15 06:21:09 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void * src, size_t n)
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

int	main()
{
	unsigned char	des[50] = "";
	unsigned char	fue[50] = "Hola mundo";
	int	i;
	char	*ret1;
	char	*ret2;

	i = 6;
	ret1 = ft_memcpy(des, fue, i);
	ret2 = memcpy(des, fue, i);
	printf("ft_memcpy: %s\n\n", ret1);
	printf("Con memcpy: %s\n\n", ret2);
	return (0);
}

/*
 *
 * The memcpy() function copies n bytes from memory area src to
   memory area dest. The memory areas must not overlap.
 *
 *
 * RETURN VALUE 
       The memcpy() function returns a pointer to dest.
 */
