#include "list_average.h"

// Stampa del risultato in forma di vettore
void output_vector(int *v, int size){
    printf("Output array is:\n");
    printf("[");
    for (size_t i = 0; i < size; i++)
    {
        printf(" %d", v[i]);
    }
    printf(" ]\n");
}

static struct Node* new_node(int value) {
    struct Node* node = malloc(sizeof(node));
    if (node != NULL) {
        node->value = value;
        node->next = NULL;
    }
    return node;
}

static struct Node* insert_after(struct Node* prev, int value) {
    struct Node* temp = new_node(value);

    if (temp == NULL)
        return NULL;
    
    if (prev != NULL) {
        temp->next = prev->next;
        prev->next = temp;
    }

    return temp;
}

static void print_list(struct Node *head){
    while (head != NULL) {
        printf("%d -> ", head->value);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* data_head = NULL;
    struct Node* last = NULL;
    int num_elems;
    int temp;

    printf("Insert the number of elements in the list:\n");
    scanf("%d", &num_elems);
    printf("Insert the list values sepearated by spaces, to finish press Enter\n");
    for(int i=0; i<num_elems; i++) {
        scanf("%d", &temp);
        last = insert_after(last, temp);
        if (data_head == NULL)
            data_head = last;
    }
    printf("Initial list: ");
    print_list(data_head);
    
    int output[num_elems];

    num_elems = list2array(data_head, output);
    output_vector(output, num_elems);

    return 0;
}