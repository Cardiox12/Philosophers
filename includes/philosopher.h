//
// Created by tony on 06/04/2021.
//

#ifndef PHILOSOPHER_H
#define PHILOSOPHER_H

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

t_philosopher *init_philosopher(int id, bool fork, int state);

#endif //PHILOSOPHER_H
