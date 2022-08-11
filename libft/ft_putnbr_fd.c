#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if(n < 0)
    {
        ft_putchar_fd(n, fd);
        n *= -1;
    }
    if(n >= 10)
    {
        ft_putnbr_fd((n / 10), fd);
        n = n % 10;
    }
    if(n < 10)
        ft_putchar_fd(n, fd);
}

// int main()
// {
//     ft_putnbr_fd(45456, 3);
// }