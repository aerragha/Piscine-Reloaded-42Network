/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:37:50 by aerragha          #+#    #+#             */
/*   Updated: 2018/10/03 18:46:48 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int sqr;

	if (nb < 0)
		return (0);
	sqr = 1;
	while (sqr * sqr < nb)
		sqr++;
	if (sqr * sqr == nb)
		return (sqr);
	return (0);
}
