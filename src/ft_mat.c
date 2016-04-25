/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_mat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liums <lpoujade@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/25 22:48:34 by liums             #+#    #+#             */
/*   Updated: 2016/04/25 22:48:34 by liums            ###   ######## fr       */
/*                                                                            */
/* ************************************************************************** */

inline int			ft_pow(int n, int p)
{
	int tmp;

	if (p)
	{
		tmp = n;
		while (p - 1)
		{
			n = n * tmp;
			p--;
		}
		return (n);
	}
	else
		return (1);
}

inline unsigned int ft_abs(signed int n)
{
	return (n < 0 ? n : n * -1);
}
