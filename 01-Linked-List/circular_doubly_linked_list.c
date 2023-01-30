#include <stdio.h>
#include <stdlib.h>

// Membuat node untuk circular linked list yang sifatnya masih singly linked list

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

// head bertujuan untuk menunjuk ke node paling awal
struct node *head = NULL;

// last bertujuan untuk menunjuk ke node paling akhir
struct node *last = NULL;

int main()
{

    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    // Melakukan alokasi memori  (jika tidak dilakukan maka akan terkena segmentation fault core dumped)
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    // Menaruh nilai pada node dibawah ini
    one->data = 1;
    two->data = 2;
    three->data = 3;

    // Menghubungkan node secara forward
    one->next = two;
    two->next = three;
    three->next = NULL;

    // Menghubungkan node secara backward
    one->prev = NULL;
    two->prev = one;
    three->prev = two;

    // Menghubungkan head ke node paling awal
    head = one;

    // Menghubungkan last ke node paling akhir
    last = three;

    // karena node paling akhir menunjuk ke NULL maka kita harus menghubungkan node paling akhir ke node paling awal agar menjadi circular linked list
    last->next = head;
}
