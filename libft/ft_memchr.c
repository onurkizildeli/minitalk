/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkizilde <mkizilde@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 03:44:00 by mkizilde          #+#    #+#             */
/*   Updated: 2023/07/18 03:44:00 by mkizilde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*tmp_s;
	unsigned char		tmp_c;

	tmp_s = (unsigned const char *)s;
	tmp_c = (unsigned char)c;
	while (n--)
		if (*tmp_s++ == tmp_c)
			return ((void *)(tmp_s - 1));
	return (NULL);
}
