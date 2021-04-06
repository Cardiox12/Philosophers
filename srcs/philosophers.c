//
// Created by tony on 02/04/2021.
//

#include "../includes/philosophers.h"

void destroy_philosophers(t_philosopher **philosophers, int n)
{
    int index;

    index = 0;
    while (index < n)
        free(philosophers[index++]);
    free(philosophers);
}

t_philosopher **init_philosophers(int size)
{
    t_philosopher   **philosophers;
    int             index;

    if (size <= 0)
        return (NULL);
    philosophers = malloc(sizeof(t_philosopher*) * size);
    if (philosophers == NULL)
        return (NULL);
    index = 0;
    while (index < size)
    {
        philosophers[index] = init_philosopher(index + 1, true, SLEEPING);
        if (philosophers[index] == NULL)
        {
            destroy_philosophers(philosophers, index);
            return (NULL);
        }
        index++;
    }
    return (philosophers);
}