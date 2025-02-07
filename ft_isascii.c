/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperello <rperello@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:23:25 by rperello          #+#    #+#             */
/*   Updated: 2025/01/16 15:57:33 by rperello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	int	result;

	if (c >= 0 && c <= 127)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
