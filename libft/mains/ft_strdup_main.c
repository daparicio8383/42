/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 09:06:37 by davapari          #+#    #+#             */
/*   Updated: 2024/04/25 06:40:09 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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
		ds[n] = sr[n];
		i++;
	}
	return (dest);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s) + 1;
	dup = malloc(sizeof(char) * len);
	if (!dup)
		return (NULL);
	else
		return(ft_memcpy(dup, s, len));
}

int	main()
{
	const char	*s;

	s = "Hola";
	printf("Con ft_strdup: %p\n", ft_strdup(s));
	printf("Con strdup: %p\n", strdup(s));
	return(0);
}

/*
 * DESCRIPTION
       The strdup() function returns a pointer to a new string which is a duplicate of the string s. 
       Memory for the new string is obtained with malloc(3), and can be freed with free(3).

 * RETURN VALUE
       On success, the strdup() function returns a pointer to the duplicated string. 
       It returns NULL if insufficient memory was available, with errno set to indicate the cause of the error.

 * CÓDIGO
	dup = malloc(sizeof(char) * len);  -->  La cantidad de memoria reservada se calcula multiplicando 
	el tamaño de un char por la longitud de la cadena más uno.

	return(ft_memcpy(dup, s, len);) --> recordamos el man memcpy:

	 	* The memcpy() function copies n bytes from memory area src to
  		 memory area dest. The memory areas must not overlap.

	        * RETURN VALUE
       		 The memcpy() function returns a pointer to dest.

		void *ft_memcpy(void *dest, const void * src, size_t n)

	En este caso, *s será la fuente, *dup el destino y len, el número de bytes copiados.
