/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 06:52:12 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/12 07:26:33 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int 		ft_active_bits(int value)
{
	unsigned int		count;

	count = 0;
	while (value > 0)
	{
		if ((value & 1) == 1)
			count++;
		value >>= 1;
	}
	return (count);
}
