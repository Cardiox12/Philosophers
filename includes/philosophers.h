//
// Created by tony on 02/04/2021.
//

#ifndef PHILOSOPHERS_PHILOSOPHERS_H
#define PHILOSOPHERS_PHILOSOPHERS_H

#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

enum e_states {
    SLEEPING,
    EATING,
    STARVING
};

typedef struct  s_philosopher {
    int         id;
    bool        fork;
    int         state;
}               t_philosopher;

typedef struct  s_philosophers {
    int             size;
    t_philosopher   philosophers;
}               t_philosophers;

typedef struct  s_constants {
    int             time_to_eat;
    int             time_to_die;
    int             time_to_sleep;
    int             max_eat;
    int             n_philosophers;
    t_philosophers  *philosophers;
}               t_constants;

extern t_constants g_constants;

#endif //PHILOSOPHERS_PHILOSOPHERS_H
