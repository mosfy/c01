/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:40:29 by tfrances          #+#    #+#             */
/*   Updated: 2025/09/11 04:18:03 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while ((i * i) < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d = 81 \n",ft_sqrt(6561));
// 	printf("%d = 0 \n",ft_sqrt(2));
// 	printf("%d = 0 \n",ft_sqrt(-3));
// }
