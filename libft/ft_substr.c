/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Aimlive <Aimlive@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:20:29 by ahassan           #+#    #+#             */
/*   Updated: 2022/08/15 01:52:11 by Aimlive          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	i;
	char	*substr;

	i = 0;
	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (len + start < slen)
		substr = (char *)malloc((len + 1) * sizeof(char));
	else
		substr = (char *)malloc((slen) * sizeof(char));
	while (s[start] && len > i)
	{
		substr[i++] = s[start++];
	}
	substr[i] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	printf("%s\n", ft_substr("bbbbb", 6, 100));

// }