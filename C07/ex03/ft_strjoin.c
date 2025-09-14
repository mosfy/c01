/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:55:16 by tfrances          #+#    #+#             */
/*   Updated: 2025/09/14 23:21:27 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	int				sizedest;

	sizedest = 0;
	while (dest[sizedest] != '\0')
	{
		sizedest++;
	}
	i = 0;
	while (src[i] != '\0' )
	{
		dest[sizedest + i] = src[i];
		i++;
	}
	dest[sizedest + i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		size_len;
	int		i;

	i = 0;
	size_len = 0;
	if (size <= 0)
	{
		res = (char *)malloc(0);
		if (res == NULL)
			return (res);
		return (res);
	}
	while (i < size)
	{
		size_len += ft_strlen(strs[i++]);
	}
	size_len += (ft_strlen(sep) * (size));
	res = (char *)malloc(sizeof(char) * (size_len + 1));
	i = 0;
	ft_putstr(res);
	while (i < size)
	{
		ft_strcat(res, strs[i++]);
		ft_strcat(res, sep);
	}
	return (res);
}

// int	main(int argc, char **argv)
// {
// 	char *test = ft_strjoin(0,argv," ");
// 	ft_putstr(test);
// }