#include "sort.h"

/**
 * insertion_sort_list - instertion sort algorithm.
 * 
 * @list: a doubly linked list to be sorted.
*/

void insertion_sort_list(listint_t **list)
{
    listint_t *pt = *list;
    listint_t *temp = NULL;
    int current_int, previous_int;

    if (!list || !(pt->next))
        return;
    
    while (pt)
    {
        pt = pt->next;
        current_int = pt->n;
        previous_int = (pt->prev)->n;
        while (pt->prev)
        {
            if (current_int < previous_int)
            {
                temp = pt;
                pt->prev = (pt->prev)->prev;
                pt->next = (pt->prev)->next;
                (pt->prev)->prev = temp->prev;
                (pt->prev)->next = temp->next;
            }
        }
    }
    

}