#include "libft.h"

int countLen(int nb)
{
    int counter = 0;
    int sign = 1;
    if(nb < 0)
    {
        sign = sign*-1;
        counter++;
    }
    while(nb != 0)
    {
        nb /= 10;
        counter++;
    }
    return counter;
}
char *ft_itoa(int n)
{
    int len = countLen(n);

    if (n == -2147483648)
        return ft_strdup("-2147483648");
    char *str = malloc((len + 1) * sizeof(char));
    if(!str)
        return NULL;
    str[len--] = '\0';
    if(n == 0)
    {
        str = calloc(2, sizeof(char));
        str[0] = 48;
    }
    if(n < 0)
    {
        str[0] = '-';
        n *= -1;
    }
    while(n > 0)
    {
        str[len] =  n % 10 + '0';
        n = n / 10;
        len--;
    }
    return str;    
}


// int main()
// {
//       printf("%s\n", ft_itoa(-21474836489));
// }