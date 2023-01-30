#include <stdio.h>
#include <stdlib.h>

// Inisialisasi Node untuk doubly linked list
struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

// head bertujuan untuk menunjuk ke node paling awal
struct node *head = NULL;

// last bertujuan untuk menunjuk ke node paling akhir
struct node *last = NULL;

// Mencetak list secara forward (awal ke akhir)
void printForward(){

    struct node * temp = head;
    while (temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    

}

// Mencetak List secara backward (akhir ke awal)
void printBackward(){
    struct node * temp = last;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->prev;
    }
    
}


int main(){

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

  // Menghubungkan head dengan node pertama 
  head = one;

  // Menghubungkan pointer last dengan node terakhir agar dapat menunjuk node terakhir (node terakhir ditandai pada bagian yang paling akhir dan terhubung dengan NULL)
  last = three;

  printf("Menampilkan Linked List secara forward: ");
  printForward();
  printf("\n");
  printf("Menampilkan Linked List secara backward: ");
  printBackward();


  

}
