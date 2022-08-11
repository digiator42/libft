/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahassan <ahassan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:20:29 by ahassan           #+#    #+#             */
/*   Updated: 2022/08/11 03:20:20 by ahassan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i = 0;
    size_t j;

    if(ft_strlen(little) == 0 || !little)
        return (char*)big;
    while(big[i] != '\0' && len > i)
    {
		j = 0;
        while(little[j] != '\0' && big[i+j] != '\0' 
              && little[j] == big[i+j] && i + j < len)
             j++;
        if(j == ft_strlen(little))
            return (char*)&big[i];

        i++;
    }
    return 0;
}


// int main ()
// {
//        printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
//        printf("%s\n", ft_strnstr1("lorem ipsum dolor sit amet", "ipsumm", 30));

// }
	