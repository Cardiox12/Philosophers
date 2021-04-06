//
// Created by tony on 02/04/2021.
//

#ifndef PHILOSOPHERS_PHILOSOPHERS_H
#define PHILOSOPHERS_PHILOSOPHERS_H

#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>
#include "philosopher.h"

typedef struct  s_constants {
    int             time_to_eat;
    int             time_to_die;
    int             time_to_sleep;
    int             max_eat;
    int             n_philosophers;
    bool            quit;
    t_philosopher   **philosophers;
}               t_constants;

extern t_constants g_constants;

void            destroy_philosophers(t_philosopher **philosophers, int n);
t_philosopher   **init_philosophers(int size);

#endif //PHILOSOPHERS_PHILOSOPHERS_H
