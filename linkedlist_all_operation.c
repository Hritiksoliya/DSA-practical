// Online C++ compiler to run C++ program online
#include <iostream>


struct node{
    int data;
    struct node * next;
};

struct node * create_node(int data)
{
        struct node *n1=(struct node*)malloc(sizeof(struct node ));
        n1->data=data;
        n1->next=NULL;
        
    return n1;

}



void trave_list(struct node *  head){
    
    if(head==NULL){
        printf("linked list is empty :\n");
    }
    else{
        struct node * ptr =head;
        printf("element is :\n");
        while(ptr!=NULL){
            
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
    }
}


struct node * insert_at_first(struct node * head ,int data)
{
    if(head==NULL){
        struct node * n1=create_node(data);
        head=n1;
        return head;
    }
    else{
        struct node * ptr=head;
        struct node * n2=create_node(data);
        head=n2;
        n2->next=ptr;
        return head;
    }
    
}


struct node * insert_at_end(struct node * head ,int data){
     if(head==NULL){
        struct node * n1=create_node(data);
        head=n1;
        return head;
    }
    else{
        struct node * ptr =head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        struct node * n2=create_node(data);
        ptr->next=n2;
        return head;
        
    }
}


struct node * insert_after(struct node * head ,int after_value,int data){
    
    if(head==NULL){
        struct node * n1=create_node(data);
        head=n1;
        return head;
    }
    else{
        struct node * ptr =head;
        while(ptr->data!=after_value){
            ptr=ptr->next;
        }
        struct node * n2=create_node(data);
        n2->next=ptr->next;
        ptr->next=n2;
        return head;
    }
}

int main() {
   struct node * head =NULL;
   trave_list(head);
   head=insert_at_first(head,20);
   trave_list(head);
   insert_at_end(head,50);
   trave_list(head);
   insert_after(head,20,70);
   trave_list(head);
   
    return 0;
}
