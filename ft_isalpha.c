/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperello <rperello@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:15:18 by rperello          #+#    #+#             */
/*   Updated: 2025/01/16 15:51:53 by rperello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int	result;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
