#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/* Structure for a linked list node */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function to print the elements of a linked list */
size_t print_list(const list_t *h);

/* Function to return the number of elements in a linked list */
size_t list_len(const list_t *h);

#endif /* LISTS_H */

