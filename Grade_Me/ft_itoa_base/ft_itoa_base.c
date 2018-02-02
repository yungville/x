/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angavrel <angavrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 18:00:30 by angavrel          #+#    #+#             */
/*   Updated: 2017/05/09 09:44:59 by angavrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa_base(int value, int base)
{
	char	*s;
	long	n;
	int		sign;
	int		len;

	n = (value < 0) ? -(long)value : value;
	sign = (value < 0 && base == 10) ? -1 : 0;
	len = 1 - sign;
	while ((n /= base))
		++len;
	s = (char *)malloc(sizeof(char) * (len + 1));
	s[len] = '\0';
	n = (value < 0) ? -(long)value : value;
	while (len-- + sign)
	{
		s[len] = (n % base < 10) ? n % base + '0' : n % base + 'A' - 10;
		n /= base;
	}
	!len ? s[0] = '-' : 0;
	return (s);
}
