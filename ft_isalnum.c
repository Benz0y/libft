/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperello <rperello@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:22:18 by rperello          #+#    #+#             */
/*   Updated: 2025/01/16 15:54:51 by rperello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	result;

	if (ft_isalpha(c) || ft_isdigit(c))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
