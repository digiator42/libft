/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahassan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 07:33:51 by ahassan           #+#    #+#             */
/*   Updated: 2022/08/10 07:34:43 by ahassan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stddef.h>
// #include <stdint.h>

void	ft_bzero(void *s, size_t n)
{
	//memset is returning pointer,  bzero doesn't

	unsigned int i;
	char *c;

	c = (char *)s;

	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char dest[] = "world";
// 	printf("%d\n", strlen(dest));
// 	bzero(dest, 5);
// 	printf("%s\n", dest);
// 	printf("%d\n", strlen(dest));
// 	printf("------------------------\n");
// 	char dest1[] = "world";
// 	printf("%d\n", strlen(dest1));
// 	ft_bzero(dest1, 7);
// 	printf("%s\n", dest1);
// 	printf("%d\n", strlen(dest1));
	
// }
