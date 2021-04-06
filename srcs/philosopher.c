//
// Created by tony on 06/04/2021.
//

#include <stdlib.h>
#include "../includes/philosopher.h"

t_philosopher *init_philosopher(int id, bool fork, int state)
{
    t_philosopher *philosopher;

    philosopher = malloc(sizeof(t_philosopher));
    if (philosopher == NULL)
        return (NULL);
    *philosopher = (t_philosopher){id, fork, state, 0};
    return (philosopher);
}