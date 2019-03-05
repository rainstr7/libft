/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 15:43:26 by ihahn             #+#    #+#             */
/*   Updated: 2019/03/05 17:19:18 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;
	size_t	i;

	len = 0;
	if (!(len = ft_strlen(s) + 1))
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = len;
	len = 0;
	while (len < i)
	{
		str[len] = s[len];
		len++;
	}
	str[len] = '\0';
	return (str);
}
