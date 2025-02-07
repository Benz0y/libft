/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperello <rperello@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:07:23 by rperello          #+#    #+#             */
/*   Updated: 2025/01/16 17:08:33 by rperello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	result;

	if (c >= 'a' && c <= 'z')
	{
		result = c - 32;
	}
	else
	{
		result = c;
	}
	return (result);
}
