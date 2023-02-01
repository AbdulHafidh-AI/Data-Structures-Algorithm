#include <stdio.h>
#include <stdlib.h>



/* Linked List merupakan suatu struktur data yang terdiri dari suatu node yang saling berhubungan.
   Node menyimpan suatu data dan alamat pada node berikutnya.

   Diagram Linked List adalah sebagai berikut:
   Head --> node --> NULL
*/

/*  
  Seperti yang sudah kita ketahui bahwasanya node menyimpan data dan alamat node berikutnya jadi kita bisa
  menggunakan struct untuk membungkus keduanya
*/

struct node{
    int data;
    struct node *next;
};


/*
  Untuk menampilkan nilai dari linked list kita akan menggunakan operasi yang bernama traverse
  
*/

void printLinkedListValue(struct node *temp){
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;

    }
    
}


// InsertAfter adalah operasi untuk menambahkan node setelah node tertentu pada linked list 

void insertAfter(struct node *prev_node, int new_data){
    // Melakukan alokasi memori untuk node baru
    struct node *new_node = (struct node*)malloc(sizeof(struct node));

    // Menaruh nilai pada node baru
    new_node->data = new_data;

    // Menghubungkan node baru dengan node berikutnya
    new_node->next = prev_node->next;

    // Menghubungkan node baru dengan node sebelumnya
    prev_node->next = new_node;
}


int main(){
    // Initialize nodes
  struct node *head;
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

  // Menghubungkan node satu sama lain
  one->next = two;
  two->next = three;
  three->next = NULL;


  // InsertAfter
  insertAfter(two, 4);

  // Menghubungkan head dengan node pertama 
  head = one;


  // Menampilkan seluruh data pada linked list
  printLinkedListValue(head);
    
}