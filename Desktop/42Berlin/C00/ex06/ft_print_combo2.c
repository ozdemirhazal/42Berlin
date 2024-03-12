#include <unistd.h>

void ft_print_numbers(int a, int b)
{
    char digit[5];

    digit[0] = (a / 10) + '0';
    digit[1] = (a % 10) + '0';
    digit[2] = ' ';
    digit[3] = (b / 10) + '0';
    digit[4] = (b % 10) + '0';
    write(1, digit, 5);
    if (a != 98 || b != 99)
    {
        write(1, ", ", 2);
    }
}

void ft_print_comb2(void)
{
    int a = 0;
    int b = 0;

    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            ft_print_numbers(a, b);
            b++;
        }
        a++;
    }
}

int main(void)
{
    ft_print_comb2();
    return 0;
}

