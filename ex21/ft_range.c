/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 09:49:11 by aerragha          #+#    #+#             */
/*   Updated: 2018/10/04 10:01:15 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *t;

	if (min >= max)
		return (0);
	if (!(t = malloc(sizeof(int) * (max - min))))
		return (0);
	while (min < max)
	{
		t[max - min - 1] = max - 1;
		max--;
	}
	return (t);
}
