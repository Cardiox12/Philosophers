//
// Created by tony on 06/04/2021.
//

#ifndef PHILOSOPHER_H
#define PHILOSOPHER_H

#include <pthread.h>
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
    pthread_t   thread_id;
}               t_philosopher;

t_philosopher *init_philosopher(int id, bool fork, int state);
void            *philosopher_loop(void *arg);
void            eat();

#endif //PHILOSOPHER_H
