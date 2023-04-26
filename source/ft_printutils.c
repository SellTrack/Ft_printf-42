/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printutils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selltrack <selltrack@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:48:53 by emyilmaz          #+#    #+#             */
/*   Updated: 2023/02/15 04:28:25 by selltrack        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	if(c == 0)
		return 0;
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	len;

	len = 0;
	while (!str)
	{
		ft_printstr("(null)");
		return (6);
	}
	while (*str)
	{
		len += ft_putchar(*str);
		str++;
	}
	return (len);
}
