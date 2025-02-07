/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperello <rperello@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:09:18 by rperello          #+#    #+#             */
/*   Updated: 2025/01/16 17:10:30 by rperello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	result;

	if (c >= 'A' && c <= 'Z')
	{
		result = c + 32;
	}
	else
	{
		result = c;
	}
	return (result);
}
