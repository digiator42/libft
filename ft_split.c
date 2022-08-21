/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahassan <ahassan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 08:03:15 by ahassan           #+#    #+#             */
/*   Updated: 2022/08/19 08:03:16 by ahassan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_len(char const *s, char c, size_t i)
{
	size_t	j;

	j = 0;
	while (s[i] != c && s[i])
	{
		i++;
		j++;
	}
	return (j);
}

static size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	cnt;
	size_t	word;

	i = 0;
	cnt = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] == c)
			cnt = 0;
		else if (s[i] != c && cnt == 0)
		{
			word++;
			cnt = 1;
		}
		i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	tab = malloc(sizeof(*tab) * (count_word(s, c) + 1));
	if (!s || !(tab))
		return (NULL);
	while (s[i])
	{
		k = 0;
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			tab[j] = malloc(sizeof(**tab) * (count_len(s, c, i) + 1));
			while (s[i] != c && s[i] != '\0' && tab[j])
				tab[j][k++] = s[i++];
			tab[j++][k] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
}

// int		main(void)
// {
// 	int i = 0;
// 	char **tab;

// 	tab = ft_split("bonjour je m'appel Arthur", ' ');
// 	while (i < 99)
// 	{
// 		printf("string %d : %s\n", i, tab[i]);
// 		i++;
// 	}
// 	return (0);
// }