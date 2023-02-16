#ifndef __LIST_2_ARRAY_H__
#define __LIST_2_ARRAY_H__

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;		    // dato
    struct Node *next;	// link
} Node;

// Copia la lista puntata da head nell'array preallocato output 
// La funzione restituisce il numero di elementi inseriti nell'array
// La funzione deve essere implementata in maniera ricorsiva
int list2array(struct Node* head, int *output);

#endif // __LIST_2_ARRAY_H__