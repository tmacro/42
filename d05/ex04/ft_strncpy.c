/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 14:25:06 by tmckinno          #+#    #+#             */
/*   Updated: 2016/08/16 03:01:53 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *s;

	s = dest;
	while (n > 0 && *src != '\0')
	{
		*s++ = *src++;
		--n;
	}
	while (n > 0)
	{
		*s++ = '\0';
		--n;
	}
	return (dest);
}
