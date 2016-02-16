/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 09:05:54 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/12 09:53:28 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int index;
	int j;
	int match;

	index = 0;
	j = 0;
	match = 0;
	while (index < length)
	{
		while (j < length)
		{
			if (tab[index] == tab[j])
				match++;
			j++;
		}
		if (match == 2)
			return (index);
		j = 0;
		match = 0;
		index++;
	}
	return (0);
}
