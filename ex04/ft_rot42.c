/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 18:16:24 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/11 19:26:16 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_rot42(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if (('a' <= str[index] && 'j' >= str[index]) ||
				('A' <= str[index] && 'J' >= str[index]))
			str[index] += 16;
		else if (('k' <= str[index] && 'z' >= str[index]) ||
				('K' <= str[index] && 'Z' >= str[index]))
			str[index] = str[index] - 10;
		index++;
	}
	return (str);
}
