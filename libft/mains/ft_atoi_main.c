/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 09:42:22 by davapari          #+#    #+#             */
/*   Updated: 2024/04/24 11:12:55 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	result;
	int	signo;

	result = 0;
	signo = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
		{
			signo = -1 * signo;
			nptr++;
		}
	}
	while (*nptr >= '0' && *nptr <= '9')
	{	
		result = result * 10 + (*nptr - 48);
		nptr++;
	}
	return (signo * result);
}

int	main()
{
	printf("ft_atoi: %d\n", ft_atoi("-987"));
	printf("atoi: %d\n", atoi("-987"));
	return (0);
}

/*
DESCRIPTION
       The atoi() function converts the initial portion of the string pointed to by nptr to int.

RETURN VALUE
       The converted value.

CÓDIGO

	- while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	  
		Se omite cualquier espacio en blanco de la cadena

	- 	if (*nptr == '-' || *nptr == '+')
		{
			if (*nptr == '-')
			{
				signo = -1 * signo;
				nptr++;
			}
		}

		Se ajustan los signos, negativo y positivo

	- 	while (*nptr >= '0' && *nptr <= '9')
		{	
			result = result * 10 + (*nptr - 48);
			nptr++;
		}

		Se procesan los dígitos del número, convirtiéndolos de caracteres a sus valores enteros
	       	correspondientes y agregándolos al resultado. El código utiliza la tabla ASCII, restando
	       	el valor ASCII de '0' para obtener el valor entero del dígito.

*/
