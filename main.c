#include <stdio.h>
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
}

int main(int argc, char **argv)
{
    if (argc == 5 || argc == 6)
    {
        if ( set_constants( &g_constants, (const char**)argv, argc ) ){
            printf("Error, parameter cannot be negative\n");
            return (EXIT_FAILURE);
        }
        set_constants(&g_constants, (const char**)argv + 1, argc - 1);
        show_constants(&g_constants);
    }
    else {
        printf("No arguments given!\n");
    }
    return (EXIT_SUCCESS);
}
