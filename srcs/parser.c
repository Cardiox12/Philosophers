//
// Created by tony on 02/04/2021.
//

#include <stdio.h>
#include "../includes/parser.h"
#include "../includes/utils.h"
#include "../includes/philosophers.h"

static bool    set_argument(int *ref, int value){
    if ( value < 0 )
        return (false);
    *ref = value;
    return (true);
}

bool    set_constants(const char **args, int size)
{
    if (!set_argument(&g_constants.n_philosophers, ft_atoi(args[0])))
        return (true);
    if (!set_argument(&g_constants.time_to_die, ft_atoi(args[1])))
        return (true);
    if (!set_argument(&g_constants.time_to_eat, ft_atoi(args[2])))
        return (true);
    if (!set_argument(&g_constants.time_to_sleep, ft_atoi(args[3])))
        return (true);
    if ( size == 5 ){
        if (!set_argument(&g_constants.max_eat, ft_atoi(args[4])))
            return (true);
    } else {
        g_constants.max_eat = -1;
    }
    g_constants.quit = false;
    return (false);
}
