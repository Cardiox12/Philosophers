#include <stdio.h>
#include "includes/solver.h"
#include "includes/philosophers.h"
#include "includes/parser.h"

t_constants g_constants;

void    show_constants(t_constants *constants)
{
    printf("%-15s| %-15s| %-15s| %-15s| %-15s\n",
           "N Philos",
           "Time to die",
           "Time to eat",
           "Time to sleep",
           "Max eat"
    );
    printf("%-15i| %-15i| %-15i| %-15i| %-15i\n",
           constants->n_philosophers,
           constants->time_to_die,
           constants->time_to_eat,
           constants->time_to_sleep,
           constants->max_eat
    );

    printf("%-15s|%-15s|%-15s\n", "Id", "Fork", "Status");
    int index = 0;
    while (index < constants->n_philosophers){
        printf("%-15i|%-15i|%-15s\n",
               constants->philosophers[index]->id,
               constants->philosophers[index]->fork,
               (const char[3][10]){"Sleeping","Eating","Starving"}[constants->philosophers[index]->state]
       );
        index++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 5 || argc == 6)
    {
        if ( set_constants( (const char**)argv + 1, argc - 1 ) ){
            printf("Error, parameter cannot be negative\n");
            return (EXIT_FAILURE);
        }
        solver_init();
        show_constants(&g_constants);
        solver_setup();
    }
    else {
        printf("No arguments given!\n");
    }
    return (EXIT_SUCCESS);
}
