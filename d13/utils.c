/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 01:23:27 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/26 02:19:43 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print(char *s)
{
	while(*s)
	{
		write(1, s, 1);
		s++;
	}
	write(1, "\n", 1);
}
