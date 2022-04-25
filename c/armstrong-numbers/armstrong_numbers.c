#include "armstrong_numbers.h"

int ft_digits(int nb);
int ft_power(int nb, int power);

bool is_armstrong_number(int candidate)
{
    int nbr;
    int sum;
    int digits;

    sum = 0;
    nbr = candidate;
    digits = ft_digits(nbr);
    while (nbr >= 1)
    {
        sum += ft_power(nbr % 10, digits);
        nbr = nbr / 10;
    }
    if (candidate == sum)
        return (true);
    return (false);
}

int ft_digits(int nb)
{
    if (nb < 0)
        nb *= -1;
    if (nb <= 9)
        return (1);
    else
        return (1 + ft_digits(nb / 10));
}

int ft_power(int nb, int power)
{
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    else
        return (nb * ft_power(nb, power - 1));
}
