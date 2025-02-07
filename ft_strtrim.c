/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperello <rperello@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:32:35 by rperello          #+#    #+#             */
/*   Updated: 2025/01/17 18:46:13 by rperello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	strat;
	size_t	end;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		strat = 0;
		end = ft_strlen(s1);
		while (s1[strat] && ft_strchr(set, s1[strat]))
			strat++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > strat)
			end--;
		str = (char *)malloc(sizeof(char) * (end - strat + 1));
		if (str)
			ft_strlcpy(str, &s1[strat], end - strat + 1);
	}
	return (str);
}
