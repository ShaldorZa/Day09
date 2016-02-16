/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 22:51:45 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/11 23:12:16 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char		*lowercase(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] = str[index] + 32;
		index++;
	}
	return (str);
}

int			same_word(char *src, char *find, int powers)
{
	int		index;
	int		f;
	int		size;

	index = 0;
	f = 0;
	size = 0;
	while (find[size] != '\0')
		size++;
	while (src[index] != '\0' && find[f] != '\0')
	{
		if (src[index] == find[f] || (powers == 1 && f == 0 && find[f] == 'P'))
		{
			index++;
			f++;
			if (f == size)
				return (1);
		}
		else if (src[index] == ' ')
			i++;
		else 
			return (0);
	}
	return (0);
}

int			main(int size, char **args)
{
	int index;

	index = 0;
	while (index < size)
	{
		if (same_word(lowercase(args[index]), "president", 0) ||
				same_word(lowercase(args[index]), "attack", 0) ||
				same_word(args[index], "Powers", 1))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		index++;
	}
	return (0);
}
