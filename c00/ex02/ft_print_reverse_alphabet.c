// This program prints the alphabet in lowercase from z to a.

#include<unistd.h>

void ft_print_reverse_alphabet(void)
{
    short c;

    c = 123;
    while (--c > 96)
        write(1, &c, 1);
}

int main()
{
    ft_print_reverse_alphabet();
    return 0;
}