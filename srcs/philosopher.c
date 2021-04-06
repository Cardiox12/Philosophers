//
// Created by tony on 06/04/2021.
//

#include <stdlib.h>
#include <stdio.h>
#include "../includes/philosopher.h"
#include "../includes/philosophers.h"

t_philosopher *init_philosopher(int id, bool fork, int state)
{
    t_philosopher *philosopher;

    philosopher = malloc(sizeof(t_philosopher));
    if (philosopher == NULL)
        return (NULL);
    *philosopher = (t_philosopher){id, fork, state, 0};
    return (philosopher);
}

void    *philosopher_loop(void *arg)
{
    const t_philosopher *philosopher = (t_philosopher*)arg;

    printf("Philosopher id %i\n", philosopher->id);
    while (true){
        if ( g_constants.quit ){
            printf("Philosopher %i exit\n", philosopher->id);
            pthread_exit(NULL);
        }
    }
    return (NULL);
}