//
// Created by tony on 06/04/2021.
//

#include "../includes/solver.h"

static void create_threads()
{
    t_philosopher   **philosophers;
    int             index;

    philosophers = g_constants.philosophers;
    index = 0;
    while (index < g_constants.n_philosophers){
        pthread_create(&philosophers[index]->thread_id, NULL, philosopher_loop, (void*)philosophers[index]);
        index++;
    }
}

static void wait_threads()
{
    t_philosopher   **philosophers;
    int             index;

    philosophers = g_constants.philosophers;
    index = 0;
    while (index < g_constants.n_philosophers){
        pthread_join(philosophers[index]->thread_id, NULL);
        index++;
    }
}

int solver_init()
{
    g_constants.philosophers = init_philosophers(g_constants.n_philosophers);
    if (g_constants.philosophers == NULL)
        return (1);
    return (0);
}

int solver_setup()
{
    create_threads();
    wait_threads();
    return (0);
}

int solver_run()
{
    return (0);
}
