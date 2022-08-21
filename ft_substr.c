/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahassan <ahassan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:20:29 by ahassan           #+#    #+#             */
/*   Updated: 2022/08/22 03:01:22 by ahassan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	i;

	i = 0;
	slen = ft_strlen(s);
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!s || !substr)
		return (NULL);
	while (start < slen && s[start] && len > i)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
