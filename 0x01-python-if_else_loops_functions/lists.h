#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s_minte - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s_minte
{
	int n;
	struct listint_s_minte *next;
} listint_t_minte;

size_t print_listint_minte(const listint_t_minte *h);
listint_t_minte *add_nodeint_end_minte(listint_t_minte **head, const int n);
void free_listint_minte(listint_t_minte *head);
listint_t_minte *insert_node_minte(listint_t_minte **head, int number);

#endif /* LISTS_H */
