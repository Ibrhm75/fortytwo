// This program prints all the digits from 0 to 9.

#include<unistd.h>

void ft_print_numbers(void)
{
    short n;

    n = 47;
    while (++n < 58)
        write(1, &n, 1);
}

int main()
{
    ft_print_numbers();
    return 0;
}