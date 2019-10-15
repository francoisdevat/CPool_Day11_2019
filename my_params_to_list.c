/*
** EPITECH PROJECT, 2019
** herder
** File description:
** derder
*/

#include <stdlib.h>
#include "mylist.h"

linked_list_t *add_to_list(void *data, linked_list_t *list)
{
    linked_list_t *addlist;

    addlist = malloc(sizeof(linked_list_t));
    addlist->data = data;
    addlist->next = list;
    return (addlist);
}

linked_list_t *my_params_to_list(int ac, char const * const *av)
{
    linked_list_t *list;
    int k;

    k = 0;
    list = NULL;
    while(k < ac) {
        list = add_to_list(av[k], list);
        k++;
    }
    return (list);
}
