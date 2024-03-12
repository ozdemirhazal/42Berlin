#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_combn_recursive(int n, int prev, int depth)
{
    char c;
    if (depth == n)
    {
        return;
    }
    if (depth != 0)
    {
        prev *= 10;
    }
    for (int i = 0; i < 10; ++i)
    {
        if (depth == n - 1 && i == 9)
        {
            c = prev + i + '0';
            ft_putchar(c);
            return;
        }
        else if (depth == n - 1 || (depth + 1 == n && i + 1 == 10))
        {
            c = prev + i + '0';
            ft_putchar(c);
            ft_putchar(',');
            ft_putchar(' ');
        }
        else
        {
            print_combn_recursive(n, prev + i, depth + 1);
        }
    }
}

void ft_print_combn(int n)
{
    print_combn_recursive(n, 0, 0);
}

int main() {
    ft_print_combn(2); // Example usage
    return 0;
}

