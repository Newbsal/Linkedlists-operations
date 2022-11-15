#include "Linkedlists.h"
// initiates a linked list;
void initiate(Node** head, int val){
    Node* Newnode= (Node*)malloc(sizeof (Node));
    Newnode->data=val;
    Newnode->link=NULL;
    (*head)=Newnode;
}
//adds a node at the beginning
void Addbeg(Node** head,int val){
    if(head==NULL) initiate(head,val);
    Node* Newnode=(Node*)malloc(sizeof(Node));
    Newnode->link=(*head);
    Newnode->data=val;
    (*head)=Newnode;
}
//prints the current linked list;
void print(Node* head){
    Node* sl=(head);
    while(sl!=NULL){
        printf("%d->",sl->data);
        sl=sl->link;
    }
    printf("NULL\n");
}
//adds a node at the end;
void Addend(Node** head, int val){
    if(head==NULL){
        printf("Cette liste est vide, cet element va etre ajoute au debut!");
        initiate(head,val);
    }
    Node *NewN=(Node*) malloc(sizeof (Node));
    NewN->data=val;
    NewN->link=NULL;
    Node* gl=(*head);
    while(gl->link!=NULL){
        gl=gl->link;
    }
    gl->link= NewN;
}
//deletes a node at the beginning;
void deletelematbeg(Node** head){
    printf("le premier element de la liste va etre supprime!\n");
    if((*head)==NULL) {
        printf("Cette liste est deja vide!");
        return;
    }
        printf("element trouve !\n");
        Node *tmp = (*head);
        (*head) = tmp->link;
        free(tmp);
        printf("element supprime!\n");
}
//deletes a node at the end;
void deletelematend(Node** head){
    printf("le dernier element de la liste va etre supprime!\n");
    if((*head)==NULL) {
        printf("Cette liste est deja vide!");
        return;
    }
    Node *tmp = (*head);
    while(tmp->link->link!=NULL) tmp=tmp->link;
    Node *fr=tmp->link;
    free(fr);
    tmp->link=NULL;
    printf("element supprime!\n");
}
//gives the sum of the elements of a linked list;
void sum(Node** head) {
    int sum;
    Node *tmp = (*head);
    while (tmp != NULL) {
        sum = sum + tmp->data;
        tmp=tmp->link;
    }
printf("La somme des cette liste est :\n %d\n",sum);
}
//finds the occurence of a value and how many times it is repeated;
void occcurence(Node** head, int val){
    Node *tmp = (*head);
    int count=0,occ=0;
    while(tmp!= NULL) {
        if (tmp->data == val) {
            printf("cet element se trouve dans la position : %d\n", count + 1);
            count++;
            occ++;
        }
        tmp = tmp->link;
    }
        printf("il est repete %d fois!",occ);
        if(count==0)printf("Aucun element trouve!\n");
    }
//deletes an element at a given position;
 void delgivenpos(Node** head, int pos){
    Node* temp=(*head);
    Node* del;
    for(int i=0;i<pos-1;i++){
        temp=temp->link;
    }
    del=temp->link;
    temp->link=temp->link->link;
    free(del);
}
//sort an array in ascending order;
void tri(Node** head){
    printf("Les element de cette liste vont etre trie!\n");
    Node *current = (*head);
    Node *index=NULL;
    int temp;
        if(head == NULL) {
            return;
        }
        else {
            while(current != NULL) {
                index = current->link;
                while(index != NULL) {

                    if(current->data > index->data) {
                        temp = current->data;
                        current->data = index->data;
                        index->data = temp;
                    }
                    index = index->link;
                }
                current = current->link;
            }
        }
    }




