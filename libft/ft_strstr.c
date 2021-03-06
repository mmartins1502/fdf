/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:01:01 by mmartins          #+#    #+#             */
/*   Updated: 2016/11/25 14:28:36 by mmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *sout, const char *sin)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	len = ft_strlen(sin);
	if (!len)
		return ((char *)sout);
	while (sout[i])
	{
		j = 0;
		while (sout[i + j] == sin[j] && sout[i + j] && sin[j])
			j++;
		if (j == len)
			return ((char *)sout + i);
		i++;
	}
	return (NULL);
}
