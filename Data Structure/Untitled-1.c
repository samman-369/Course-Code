#include<stdio.h>
#include<stdlib.h>
struct node {

    int data;
    struct node* next;
} *head, *newnode, *temp;

 void implemention(){
    int ch=1;
    while(ch){
       newnode = (struct node*)malloc(sizeof(struct node*));
       printf("Enter you Id");
       scanf("%d",&newnode->data);
       newnode->next = NULL;

       if(head==0){
         head = temp = newnode;     
       }

       else{
           temp->next = newnode;
           temp = newnode;
       }
       printf("Press 0 for stop");
       scanf("%d",&ch);
    }
}

void display(){
    temp = head;
    int i =0;
    while(temp!=0){
        printf("List[%d] = %d",i,temp->data);
        temp = temp->next;
        printf("\n");
        i= i+1;
    }
}
void serch(){
    printf("Enter the serch number");
    int s;
    scanf("%d",&s);
        temp = head;
        while(temp!=0){
           if(temp->data == s){
              printf("Item found");
              printf("%d",temp->data);
              break;
            }
            temp = temp->next;
        }
        if(temp==0){
            printf("Item not found");
        }
    }
int main(){
    int *head = 0;
    implemention();
    display();
    serch();
    return 0;
}