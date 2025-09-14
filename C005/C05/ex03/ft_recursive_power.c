/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:40:29 by tfrances          #+#    #+#             */
/*   Updated: 2025/09/11 04:28:06 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power <= -1)
		return (0);
	return (ft_recursive_power(nb, power - 1) * nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d = 1 \n",ft_recursive_power(3, 0));
// 	printf("%d = 0\n",ft_recursive_power(5, -1));
// 	printf("%d = -1\n",ft_recursive_power(-1, 3));
// 	printf("%d = 0\n",ft_recursive_power(0, 10));
// 	printf("%d = 243\n",ft_recursive_power(3, 5));
// }
