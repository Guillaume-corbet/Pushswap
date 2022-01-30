/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** move
*/

#include "pushswap.h"

void swap(rlist *p_list)
{
    int number = 0;
    int number2 = 0;

    number = p_list->p_head->data;
    number2 = p_list->p_head->p_next->data;
    dlist_remove(p_list, 1);
    dlist_remove(p_list, 1);
    dlist_prepend(p_list, number);
    dlist_prepend(p_list, number2);
}

void super_swap(rlist *less, rlist *more)
{
    int number = 0;

    number = less->p_head->data;
    dlist_remove(less, 1);
    dlist_prepend(more, number);
}

void rotate_left(rlist *p_list)
{
    int number = 0;

    number = p_list->p_head->data;
    dlist_remove(p_list, 1);
    dlist_append(p_list, number);
}

void rotate_right(rlist *p_list)
{
    int number = 0;

    number = p_list->p_tail->data;
    dlist_remove(p_list, p_list->length);
    dlist_prepend(p_list, number);
}