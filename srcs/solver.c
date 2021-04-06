//
// Created by tony on 06/04/2021.
//

#include "../includes/solver.h"

int solver_init()
{
    g_constants.philosophers = init_philosophers(g_constants.n_philosophers);
    if (g_constants.philosophers == NULL)
        return (1);
    return (0);
}

int solver_setup()
{
    return (0);
}

int solver_run()
{
    return (0);
}