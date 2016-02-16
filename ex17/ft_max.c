/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 07:29:43 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/12 07:36:14 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_max(int *tab, int length)
{
	int		index;
	int		max;

	max = tab[0];
	index = 1;
	while (index < length)
	{
		if (max < tab[index])
			max = tab[index];
		index++;
	}
	return (index);
}
