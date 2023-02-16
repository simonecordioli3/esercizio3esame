#ifndef __LIST_AVERAGE_H__
#define __LIST_AVERAGE_H__

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;		    // dato
    struct Node *next;	// link
} Node;

// Calcola la media dei valori contenuti nella lista in input
float get_list_average(struct Node* head);

// Crea una nuova lista composta dai nodi della lista in input 
// il cui valore supera la media della dati contenuti nella lista 
struct Node* list_average(struct Node *head);

#endif // __LIST_AVERAGE_H__