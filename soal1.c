#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct medis {
    char ID[50];
    int durasi;
    struct medis* next;
};


void tambahPasien(struct medis** head, char* ID, int durasi) {
    struct medis* baru = (struct medis*)malloc(sizeof(struct medis));
    strcpy(baru->ID, ID);
    baru->durasi = durasi;
    baru->next = NULL;

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
}

int main() {
    struct medis* head = NULL;
    int T;
    int sum_durasi= 0;
    char id [100];
    char order [100];
    int durasitemp;
    scanf ("%d", &T);
    for (int i = 0; i<T; i++){
        scanf("%c %d", &id , &durasitemp);
        tambahPasien(&head, id, durasitemp);
        sum_durasi += durasitemp;
    }
    printf("ORDER ");
    struct medis* temp = head;
    while(temp != NULL){
        printf("%s", temp->ID);
    }
    printf("\n");
    printf("WAIT %d", &sum_durasi);
    return 0;

}
