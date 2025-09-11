/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:48:38 by tfrances          #+#    #+#             */
/*   Updated: 2025/09/11 04:27:47 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= -1)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d \n",ft_recursive_factorial(3));
// 	printf("%d \n",ft_recursive_factorial(5));
// 	printf("%d \n",ft_recursive_factorial(-1));
// 	printf("%d \n",ft_recursive_factorial(0));
// }
