#include "linkedListTools.hpp"
#include <stdlib.h>
#include <stdio.h>

struct Node{
    int data;
    struct Node * next;
};
// }*head, *tail;



struct Node *createNode(int data){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
};

void pushHead(int data, Node *&head, Node*&tail){
    struct Node *tmp = createNode(data);
    if(head == NULL){
        head = tail = tmp;
    }else {
        tmp->next = head;
        head = tmp;
    }
    return;
}

void pushTail(int data, Node *&head, Node*&tail){
    struct Node *tmp = createNode(data);
    if(tail == NULL){
        head = tail = tmp;
    }else {
        tail->next = tmp;
        tail = tmp;
    }
}

void popHead(Node *&head, Node*&tail){
    if(head == NULL){
        return;
    }else if(head == tail){
        free(head);
        head = tail = NULL;
    } else {
        struct Node *temp = head->next;
        head->next = NULL;
        free(head);
        head = temp;
    }
}

void popTail(Node *&head, Node*& tail){
    if(!head){
        return;
    } else if(head == tail){
        free(head);
        head = tail = NULL;
    } else {
        struct Node *curr = head;
        while(curr){
            if(curr->next == tail){
                curr->next = NULL;
                free(tail);
                tail = curr;
                break;
            }
            curr = curr->next;
        }
    }
}

void reverseLinkedList(Node *&head, Node*& tail){
    if(!head){
        return;
    } else {
        struct Node *curr = head, *prev = NULL, *next = NULL;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        tail = head;
        head = prev;
    }
}

void printLinkedList(Node *head, Node* tail){
    struct Node * tmp = head;
    while (tmp){
        printf( "%d ", tmp->data);
        tmp = tmp->next;
    };
    puts("");   
}