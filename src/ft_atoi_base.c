/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 10:11:51 by lpoujade          #+#    #+#             */
/*   Updated: 2016/03/15 10:47:38 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(char c)
{
	if (c == '\t' || c == ' ' || c == '\n' || c == '\v' || c == '\f' ||
			c == '\r')
		return (1);
	return (0);
}

static int	s_isdigit(char c)
{
	if ((c >= '0' && c <= '9') ||
			(c >= 'A' && c <= 'F'))
		return (1);
	return (0);
}

static char	s_toupper(char c)
{
	if (c >= 'a' && c <= 'f')
		return (c - 32);
	return (c);
}

int			ft_atoi_base(char *str, int str_base)
{
	int		i;
	int		neg;
	int		ret;

	neg = 1;
	ret = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i])
	{
		if (!s_isdigit(s_toupper(str[i])))
			return (-1);
		ret *= str_base;
		ret += (str[i] <= '9') ? str[i] - '0' : s_toupper(str[i]) - 55;
		i++;
	}
	return (ret * neg);
}
