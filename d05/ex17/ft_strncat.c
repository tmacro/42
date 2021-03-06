/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 14:02:44 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/16 22:51:59 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char *s;

	s = dest;
	while (*s)
		s++;
	while (nb > 0 && *src)
	{
		*s = *src;
		s++;
		src++;
		nb--;
	}
	*s = '\0';
	return (dest);
}
