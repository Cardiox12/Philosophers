//
// Created by tony on 02/04/2021.
//

#include "utils.h"

static int	ft_isspace(char c)
{
    return ((c == '\n' || c == '\t' || c == '\v' || c == '\f' || c == '\r' || c == ' ') ? 1 : 0);
}

int ft_atoi(const char *s){
    int sign;
    int result;

    sign = 1;
    result = 0;
    while (ft_isspace(*s))
        s++;
    if (*s == '-' || *s == '+')
        if (*s++ == '-')
            sign = -1;
    while (*s >= '0' && *s <= '9')
        result = result * 10 + (*s++ - '0');
    return (result * sign);
}
