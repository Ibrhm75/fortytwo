// This program prints the alphabet in lowercase from a to z.

#include<unistd.h>

void ft_print_alphabet(void)
{
    short c;

    c = 96;
    while (++c < 123)
        write(1, &c, 1);
}

int main()
{
    ft_print_alphabet();
    return 0;
}