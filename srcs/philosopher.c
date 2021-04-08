//
// Created by tony on 06/04/2021.
//

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../includes/philosopher.h"
#include "../includes/philosophers.h"
#include "../includes/utils.h"

void    philosopher_eat(t_philosopher *philosopher){
    printf("Philosopher %i eat\n", philosopher->id);
    usleep( ms_to_us( g_constants.time_to_eat ) );
}

void    philosopher_think(t_philosopher *philosopher){
    printf("Philosopher %i think\n", philosopher->id);
}

void    philosopher_sleep(t_philosopher *philosopher){
    printf("Philosopher %i sleep\n", philosopher->id);
    usleep( ms_to_us( g_constants.time_to_sleep ) );
}

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
    while ( true )
    {
        philosopher_eat((t_philosopher*)philosopher);
        philosopher_sleep((t_philosopher*)philosopher);
        philosopher_think((t_philosopher*)philosopher);
        if ( g_constants.quit ){
            printf("Philosopher %i exit\n", philosopher->id);
            pthread_exit(NULL);
        }
    }
    pthread_exit(NULL);
}
