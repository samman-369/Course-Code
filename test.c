#include<stdio.h>
#include<stdlib.h>
struct node {

    int data;
    struct node* next;
} *head, *newnode, *temp;

 void implemention(){
    int ch;
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

void insert_B(){
    printf("Insert at Beginning");
    newnode = (struct node*)malloc(sizeof(struct node*));
    printf("Enter data");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head = newnode;
}

void insert_E(){
    temp = head;
    printf("Insert at Ending");
    newnode = (struct node*)malloc(sizeof(struct node*));
    printf("Enter your data");
    scanf("%d",&newnode->data);
    while(temp->next !=0){
         temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = 0;
}

void insert_M(){
    int pos;
    printf("Enter toyr position");
    scanf("%d",&pos);
    newnode = (struct node*)malloc(sizeof(struct node*));
    printf("Enter your data");
    scanf("%d",&newnode->data);
    int count=1;
    temp = head;
    while(temp!=0){
        count = count+1;
        temp = temp->next;
    }
    if(pos>count){
        printf("Invalid position");
    }
    else{
       temp = head;
       int j=1;
       while(j<pos){
        temp = temp->next;
        j++;
       }
       newnode->next = temp->next;
       temp->next = newnode;
    }
}

void delete_B(){
    printf("Delete from Begining\n");
    temp = head;
    head = temp->next;
    free(temp);
}

void delete_E(){
    printf("Delete from end\n");
    struct node *prenode;
    temp = head;
    while(temp->next!=0){
        prenode = temp->next;
        temp = temp->next;

      if (head == 0){
          printf("Find no item for delete");
      }
      else{
          temp->next = 0;
          free(prenode);
      }
    }
}

void delete_M(){

    struct node* nextnode;
    int pos , i=1;
    temp = head;
    printf("Enter position");
    scanf("%d",&pos);
    while(i<pos-1){
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
}
void serch(){
    printf("Enter the serch number");
    int s;
    scanf("%d",&s);
        temp = head;
        while(temp!=0){
           if(temp->data == s){
              printf("Item found");
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
    delete_M();
    display();
    return 0;
}