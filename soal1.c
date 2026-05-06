#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// deklarasi struct
typedef struct medis {
    char ID[50];
    int durasi;
    struct medis* next;
}medis;

// nambah prajurit baru ke akhir linked list
//void tambahPasien(struct medis** head, char* ID, int durasi) {
   // struct medis* baru = (struct medis*)malloc(sizeof(struct medis));
   // strcpy(baru->ID, ID);
   // baru->durasi = durasi;
   // baru->next = NULL;

    //kalau linked list kosong
    if (*head == NULL) {
        *head = baru;
        return;
    }

    struct medis* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = baru;


int main() {
    struct medis* head = NULL;
    
    int T;
    int sum_durasi= 0;
    scanf ("%d", &T);
    for (int i = 0; i<T; i++){
        scanf("%s %d", &medis->ID, &medis->durasi);
        sum_durasi +=  sum_durasi -> durasi;
        tambahPasien(&head, medis->ID, medis->durasi);
    
    printf("ORDER %s", medis->ID);
    printf("WAIT %d", sum_durasi);

    return 0;
    }
}
