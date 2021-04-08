//
// Created by tony on 08/04/2021.
//

#ifndef PHILOSOPHERS_TIMER_H
#define PHILOSOPHERS_TIMER_H

#include <sys/time.h>
#include <stddef.h>

#define TIME_FACTOR 1000.0f

typedef struct      s_timer
{
    struct timeval  start;
    struct timeval  end;
    double          duration;
}                   t_timer;

void    timer_begin(t_timer *timer);
void    timer_end(t_timer *timer);
double  timer_duration(t_timer *timer);

#endif //PHILOSOPHERS_TIMER_H
