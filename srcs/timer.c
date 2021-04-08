//
// Created by tony on 08/04/2021.
//

#include "../includes/timer.h"

void    timer_begin(t_timer *timer){
    gettimeofday(&timer->start, NULL);
}

void    timer_end(t_timer *timer){
    gettimeofday(&timer->end, NULL);
}

double  timer_duration(t_timer *timer){
    timer->duration = (float)(timer->end.tv_sec - timer->start.tv_sec) * TIME_FACTOR;
    timer->duration += (float)(timer->end.tv_usec - timer->start.tv_usec) / TIME_FACTOR;
    return (timer->duration);
}
