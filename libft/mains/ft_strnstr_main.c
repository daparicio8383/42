/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_main2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 06:21:28 by davapari          #+#    #+#             */
/*   Updated: 2024/04/24 10:54:48 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if ((char)little[i] == '\0')
		return ((char *)big);
	while (i < len && *big)
	{
		while (i + j < len && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

int	main()
{
	const char	big[30] = "hello world hello!";
	const char	little[30] = "orl";
	size_t	len;

	len = 25;
	printf("Con ft_strnstr: %s\n", ft_strnstr(big, little, len));
	printf("Con strnstr: %s\n", strnstr(big, little, len));
	return (0);
}

/*DESCRIPTION
     The strnstr() function locates the first occurrence of the null-terminated string little in the string big,
     where not more than len characters are searched. Characters that appear after a ‘\0’ character are not searched.
     Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.

 RETURN VALUES
     If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; otherwise
     a pointer to the first character of the first occurrence of little is returned.

 CÓDIGO
           while (i + j < len && big[i + j] == little[j])
		   j++;
           if (little[j] == '\0')
        	   return ((char *)(big + i));
	   i++;

	   Cuando i = 0, big[0 + 0] != little[0] --> h != o
	   Cuando i = 1, big[1 + 0] != little[0] --> e != o
	   Cuando i = 2, big[2 + 0] != little[0] --> l != o
	   Cuando i = 3, big[3 + 0] != little[0] --> l != o
	   Cuando i = 4, big[4 + 0] == little[0] --> o == o ; j++
	   Cuando i = 4, big[4 + 1] != little[1] --> ' ' != r
	   Cuando i = 5, big[5 + 1] != little[1] --> w != r
	   Cuando i = 6, big[6 + 1] != little[1] --> o != r
	   Cuando i = 7, big[7 + 1] == little[1] --> r == r ; j++
	   Cuando i = 7, big[7 + 2] == little[2] --> l == l ; j++
	   little[3] == '\0'
	   Se retorna un puntero a big + i (i = 7) --> output = "orld hello!"

*/ 
