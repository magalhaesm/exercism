#include "isogram.h"

bool is_isogram(const char phrase[])
{
    int i;
    int j;

    if (!phrase)
        return (false);
    i= 0;
    while (phrase[i] != '\0')
    {
        j = i + 1;
        while (phrase[j] != '\0')
        {
            if (!ft_isalpha(phrase[i]))
                break;
            if (ft_tolower(phrase[i]) == ft_tolower(phrase[j]))
                return (false);
            j++;
        }
        i++;
    }
    return (true);
}

int ft_isalpha(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

char ft_tolower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}
