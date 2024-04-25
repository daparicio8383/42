/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 07:53:14 by davapari          #+#    #+#             */
/*   Updated: 2024/04/16 06:47:22 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void * src, size_t n)
{
	char	*ds;
	char	*buf;
	size_t	i;

	ds = (char *)dest;
	buf = (char *)src;	
	if (!dest && !src)
	{
		return (NULL);
	}
	if (src > dest)
	{
		while (n > 0)
		{
			ds[n - 1] = buf[n - 1];
			n--;
		}
		return (dest);
	}
	else
	{
		while (i < n)
		{	
			ds[i] = buf[i];
			i++;
		}
		return (dest);
	}
}
int	main()
{
	unsigned char	des[40] = "bbbbbbbbbbbbbbbbbb";
	unsigned char	fue[11] = "Hola mundo";
	int	i;
	char	*ret1;
	char	*ret2;

	i = 11;
	ret1 = ft_memmove(des, fue, i);
	ret2 = memmove(des, fue, i);
	printf("ft_memmove: %s\n\n", ret1);
	printf("Con memmove: %s\n\n", ret2);
	return (0);
}

/* DESCRIPTION
	La función memmove copia un bloque de memoria de una ubicación a otra, incluso si los bloques de memoria se superponen.
	Esta es la principal diferencia con memcpy, pues memmove sí maneja de forma segura el caso en el que el buffer origen
	y el buffer destino se superpongan.

	¿Cuándo hay solapamiento? Este se produce cuando el buffer de origen es menor que el buffer de destino, esto es, cuando
	se encuentra en una posición de memoria anterior.

RETURN VALUE
       The memmove() function returns a pointer to dest.

- Primero se verifica que ni src ni dest sean nulos.
- Se verifica que src > dest. En este caso, se refiere a las direcciones de memoria, no
a su valor. Si src es mayor, significa que su dirección de memoria también será mayor que
la de dest. Esto indica que no habrá solapamientos entre las áreas de memoria a copiar.
- El bucle [ds[n - 1] = buf[n - 1];] copia los bytes desde el final del buffer buf hacia el final del destino ds,
siempre que n>0
- Si src no es mayor (el else), entonces habrá superposición entre las áreas de memoria y copiaremos de src
a dest en sentido ascendente.

Copiar en sentido descendente puede ser más eficiente y si ocurre algún error durante la copia, es menos probable que afecte
a los datos que ya han sido copiados.

Cuando hay superposición entre las áreas de memoria origen y destino, copiar en sentido ascendente asegura que los datos no se
sobrescriban antes de ser copiados completamente. Al copiar en sentido ascendente, garantizamos que los datos se copien de manera segura,
sin correr el riesgo de perder información debido a la sobreescritura prematura de datos.

*/
