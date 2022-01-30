/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** pushswap
*/

#ifndef PUSHSWAP_H_
#define PUSHSWAP_H_

#include "lib/my/my.h"
#include "lib/my_printf/my_printf.h"
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int data;
    struct node *p_next;
    struct node *p_prev;
};

typedef struct dlist
{
    size_t length;
    struct node *p_tail;
    struct node *p_head;
}rlist;

typedef struct pushswap
{
    int zou;
    int min;
    int pos;
}pushswap_t;

void dlist_append_second(rlist *plist, struct node *p_new, int number);
void dlist_append(rlist *p_list, int number);
void dlist_prepend_second(rlist *p_list, struct node *p_new, int number);
void dlist_prepend(rlist *p_list, int number);
rlist *dlist_new(void);
void dlist_remove_second(rlist *p_list, struct node *p_temp, int position);
void dlist_remove(rlist *p_list, int position);
void dlist_display(rlist *p_list);
void swap(rlist *p_list);
void super_swap(rlist *less, rlist *more);
void rotate_left(rlist *p_list);
void rotate_right(rlist *p_list);
void stock(rlist *p_list, char **argv, int argc);
int algo_v2(rlist *p_one, rlist *p_two, pushswap_t *pu);
void algo_v2_sec(rlist *p_one, rlist *p_two, pushswap_t *pu);
void search_small(rlist *p_one, rlist *p_two, pushswap_t *pu);
int check(int argc, char **argv);

#endif /* !PUSHSWAP_H_ */
