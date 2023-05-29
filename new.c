
#include <stdio.h>
#include <stdlib.h>
struct NODE
{
    int data;
    struct NODE *next;
};
struct NODE *linkedlistTraversal(struct NODE *ptr)
{
    while (ptr != NULL)
    {

        printf("[%d]->", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    return ptr;
}


int main()
{
    struct NODE *Head = (struct NODE *)malloc(sizeof(struct NODE));
    struct NODE *first = (struct NODE *)malloc(sizeof(struct NODE));
    struct NODE *second = (struct NODE *)malloc(sizeof(struct NODE));
    struct NODE *third = (struct NODE *)malloc(sizeof(struct NODE));
    struct NODE *fourth = (struct NODE *)malloc(sizeof(struct NODE));
    Head->data = 11;
    Head->next = first;
    first->data = 22;
    first->next = second;
    second->data = 11;
    second->next = third;
    third->data = 22;
    third->next = fourth;
    fourth->data = 11;
    fourth->next = NULL;
   // printf("THE GENERATED LINKED LSIT IS:WITHOUT ANY INSERTION OPERATION\n");
    //Head = linkedlistTraversal(Head);
    /* printf("LINKED LIST AFTER INSERTION AT BEGINNING OF VERY FIRST NODE\n");
     struct NODE* ptr=(struct NODE*)malloc(sizeof(struct NODE));
        ptr->data=55;
        ptr->next=Head;
        Head=ptr;
    Head=linkedlistTraversal(Head);*/
    /*printf("LINKED LIST AFTER THE  INSERTION BEFORE THE GIVEN INDEX\n");
    struct NODE *ptr = (struct NODE *)malloc(sizeof(struct NODE));
    struct NODE *P = Head;
    int i,index;
    printf("enter index\n");
    scanf("%d",&index);
    for (i = 0; i != index - 1; i++)
    {
        P = P->next;
    }
    ptr->data = 33;
    ptr->next = P->next;
    P->next = ptr;

    Head = linkedlistTraversal(Head);*/
    printf("LINKED LIST AFTER THE INSERTION OF THE GIVEN NODE\n");
     struct NODE* ptr=(struct NODE*)malloc(sizeof(struct NODE));
     struct NODE* prevnode=Head;
     
    ptr->data=44;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    Head = linkedlistTraversal(Head);
    return 0;
}
