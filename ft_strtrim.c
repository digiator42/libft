/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahassan <ahassan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 03:16:02 by ahassan           #+#    #+#             */
/*   Updated: 2022/08/17 02:34:54 by ahassan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	rear;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		front = 0;
		rear = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		rear--;
		while (rear > front && ft_strchr(set, s1[rear]))
			rear--;
		str = (char *)malloc(sizeof(char) * (rear - front + 2));
		if (str)
			ft_strlcpy(str, &s1[front], rear - front + 2);
	}
	return (str);
}
