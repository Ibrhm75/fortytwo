// This program takes a pointer to int as a parameter and sets the vale
// '42' to that int.

#include<stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main()
{
    int n;
    int *nbr;

    n = 0;
    nbr = &n;
    ft_ft(nbr);
    printf("%d\n", n);
    return 0;
}