/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 15:01:54 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/11 16:27:40 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void		ft_start(int hour)
{
	if (hour < 23 && hour > 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (((hour < 10 && hour > 0) || (hour < 23 && hour > 12)) && hour != 22) 
		printf("0");
	if (hour > 12 && (!(hour > 23 ||  hour < 0)))
	{
		printf("%d", hour -12);
	}
	else if (hour == 0)
	{
		printf("12");
	}
	else if (!(hour > 23 || hour < 0))
	{
		printf("%d", hour);
	}
}

void		ft_am(int hour)
{
	if (hour < 10 && hour >= 0) 
	{
		printf(".00 A.M. AND 0%d.00 A.M.", hour);
	}
	else
	{
		printf(".00 A.M. AND %d.00 A.M.", hour);
	}
}

void		ft_pm(int hour)
{
	if ( (hour < 23 && hour > 12))
	{
		printf(".00 P.M. AND 0%d.00 P.M.", hour);
	}
	else
	{
		printf(".00 P.M. AND %d.00 P.M.", hour);
	}
}
void		ft_takes_place(int hour)
{
	ft_start(hour);
	if (hour < 11)
	{
		ft_am(hour + 1);
	}
	else if (hour == 11)
	{
		printf(".00 A.M. AND 12.00 P.M.");
	}
	else if (hour < 23 && hour > 11)
	{
		ft_pm(hour - 11);
	}
	else if (hour > 23 || hour < 0)
	{
		printf("NOT AN ACCEPTABLE TIME");
	}
	else
   	{
		printf(".00 P.M. AND 12.00 A.M.");
	}
	printf("\n");
}
