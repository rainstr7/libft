/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delarray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 17:43:44 by ihahn             #+#    #+#             */
/*   Updated: 2019/03/07 17:55:17 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_delarray(char ***arr, int len)
{
	int		i;

	i = 0;
	while (i < len)
		free(arr[i]);
	free(arr);
	return (NULL);
}
