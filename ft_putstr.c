/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkelsie <gkelsie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:51:07 by gkelsie           #+#    #+#             */
/*   Updated: 2021/10/11 12:37:27 by gkelsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *str)
{
	size_t	i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
	return (i);
}
