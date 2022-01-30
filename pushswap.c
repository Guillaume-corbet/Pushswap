/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** pushswap
*/

#include "pushswap.h"

void stock(rlist *p_list, char **argv, int argc)
{
    int i = 1;

    while (i != argc) {
        dlist_append(p_list, my_getnbr(argv[i]));
        i = i + 1;
    }
}

void search_small(rlist *p_one, rlist *p_two, pushswap_t *pu)
{
    struct node *p_temp = p_one->p_head;
    int y = 0;
    int a = 0;

    pu->min = 2147483647;
    pu->pos = 0;
    while (p_temp != NULL) {
        if (p_temp->data < pu->min) {
            pu->min = p_temp->data;
        }
        p_temp = p_temp->p_next;
    }
}

int algo_v2(rlist *p_one, rlist *p_two, pushswap_t *pu)
{
    search_small(p_one, p_two, pu);
    while (p_one->p_head->data != pu->min) {
        rotate_left(p_one);
        write(1, "ra ", 3);
    }
    super_swap(p_one, p_two);
    write(1, "pb ", 3);
    if (p_one->length != 1)
        algo_v2(p_one, p_two, pu);
    return (0);
}

void algo_v2_sec(rlist *p_one, rlist *p_two, pushswap_t *pu)
{
    super_swap(p_one, p_two);
    write(1, "pb ", 3);
    while (p_two->length != 1) {
        super_swap(p_two, p_one);
        write(1, "pa ", 3);
    }
    write(1, "pa\n", 3);
}

int main(int argc, char **argv)
{
    pushswap_t *pu;
    int number = 5;

    pu = malloc(sizeof(pushswap_t));
    rlist *p_list1 = NULL;
    rlist *p_list2 = NULL;
    p_list1 = dlist_new();
    p_list2 = dlist_new();
    number = check(argc, argv);
    if (number == 0) {
        my_putchar('\n');
        return (0);
    } else if (number == 84) {
        return (84);
    }
    stock(p_list1, argv, argc);
    algo_v2(p_list1, p_list2, pu);
    algo_v2_sec(p_list1, p_list2, pu);
    p_list2 = NULL;
    free(pu);
    return (0);
}
