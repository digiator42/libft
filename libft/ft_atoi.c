/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahassan <ahassan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 07:33:48 by ahassan           #+#    #+#             */
/*   Updated: 2022/08/10 20:16:29 by ahassan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *ptr)
{
    int i = 0;
    int j = 1;
    int count = 0;
    unsigned long long res = 0;

    while(ptr[i] == ' ' || (ptr[i] >= 8 && ptr[i] <= 14))
        i++;
    if (ptr[i] == '-' || ptr[i] == '+')
    {
        if(ptr[i++] == '-') 
        j *= -1;
    }
    while(ptr[i] == '0')
        i++;    
    while(ptr[i] >= '0' && ptr[i] <= '9')
    {
        res = (ptr[i++] - 48) + (res * 10);
        count++;    
    }
    if (count > 19 || res >= __LONG_LONG_MAX__)
        return (-(j == 1));
    return res * j;
}
// int main()
// {
//     printf("%d\n", atoi("-923-3726854775809"));
//     printf("%d\n", ft_atoi("-923-72036854775809"));
//     printf("----------------------\n");
//     printf("%d\n", atoi("-545664"));
//     printf("%d\n", ft_atoi("-545664"));
//     printf("----------------------\n");
//     printf("%d\n", atoi("++++545664"));
//     printf("%d\n", ft_atoi("++++545664"));
// }
