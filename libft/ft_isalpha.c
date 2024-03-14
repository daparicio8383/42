/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davapari <davapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 05:44:27 by davapari          #+#    #+#             */
/*   Updated: 2024/03/14 05:48:03 by davapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int character)
{
	if ((character >= 65 && character <= 90)
		|| (character >= 97 && character <= 122))
		return (character);
	else
		return (0);
}
