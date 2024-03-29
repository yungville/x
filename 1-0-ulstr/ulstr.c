/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angavrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 15:11:26 by angavrel          #+#    #+#             */
/*   Updated: 2018/01/19 13:29:02 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ulstr(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
	else if (*c >= 'a' && *c <= 'z')
		*c -= 32;
	return (c);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		while (*av[1])
			write(1, ulstr(av[1]++), 1);
	write(1, "\n", 1);
	return (1);
}
