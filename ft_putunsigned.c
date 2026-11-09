/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motolbix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 20:08:44 by motolbix          #+#    #+#             */
/*   Updated: 2026/11/03 20:08:44 by motolbix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int u)
{
	int		count;

	count = 0;
	if (u >= 10)
	{
		count += ft_putunsigned(u / 10);
		count += ft_putunsigned(u % 10);
	}
	else
	{
		count += ft_putchar(u + '0');
	}
	return (count);
}
