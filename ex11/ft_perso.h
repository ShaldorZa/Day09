/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 05:45:57 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/12 06:08:27 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PERSO_H 
# define FT_PERSO_H
# define SAVE_AUSTIN_POWERS "Saving Austin Powers"

typedef struct		t_perso
{
	char		*name;
	float		life;
	int			age;
	int			profession;
}					s_perso;

#endif
