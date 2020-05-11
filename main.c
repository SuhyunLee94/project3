#include "list.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
    int num, val;
    
    Node * head = NULL;
    Node * tail = NULL;
    
    do {
        num=0;
        printf("Enter the number\n");
        printf("1. Insert head\n");
        printf("2. Insert tail\n");
        printf("3. Delete a node\n");
        printf("4. Delete all\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        scanf("%d", &num);
        if(num<1 || num>6) {
            printf("Please enter a number between 1 to 6. Forced termination\n");
            num=6;
        }
        
        switch(num) {
            case 1 :
                printf("Enter the head number: ");
                scanf("%d", &val);
                head=List_insert(head, val);
                break;
            case 2 :
                printf("Enter the tail number: ");
                scanf("%d", &val);
                tail=List_insert_last(head, val);
                break;
            case 3 :
                printf("Enter the delete number: ");
                scanf("%d", &val);
                head=List_delete(head, val);
                break;
            case 4 :
                printf("Delete all\n");
                List_destroy(head);
                break;
            case 5 :
                printf("Display\n");
                List_print(head);
                break;
            case 6 : 
                printf("Exit\n");
                break;
        }while(num!=6);
    }
}
