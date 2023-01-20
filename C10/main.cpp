
// struct Node{
//     int data;
//     Node *next;
// }*head, *tail;

// Node *createNode(int data){
//     Node *newNode = (Node*)malloc(sizeof(Node));
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// void pushHead(int data){
//     Node *temp = createNode(data);
//     if(!head){
//         head = tail = temp;
//     } else {
//         temp->next = head;
//         head = temp;
//     }
// }

// void pushTail(int data){
//     Node *temp = createNode(data);
//     if(!head){
//         head = tail = temp;
//     } else {
//         tail->next = temp;
//         tail = temp;
//     }
// }

// void pushMid(int data, int key){
//     Node *temp = createNode(data);
//     if(!head){
//         return;
//     } else {
//         Node *curr = head;
//         while(curr){
//             if(curr->data == key){
//                 temp->next = curr->next;
//                 curr->next = temp;
//                 break;
//             }
//             curr = curr->next;
//         }
//     }
// }

// void popHead(){
//     if(!head){
//         return;
//     } else if(head == tail){
//         free(head);
//         head = tail = NULL;
//     } else {
//         Node *temp = head->next;
//         head->next = NULL;
//         free(head);
//         head = temp;
//     }
// }

// void popTail(){
//     if(!head){
//         return;
//     } else if(head == tail){
//         free(head);
//         head = tail = NULL;
//     } else {
//         Node *curr = head;
//         while(curr){
//             if(curr->next == tail){
//                 curr->next = NULL;
//                 free(tail);
//                 tail = curr;
//                 break;
//             }
//             curr = curr->next;
//         }
//     }
// }

// void popMid(int key){
//     if(!head){
//         return;
//     } else {
//         Node *curr = head;
//         while(curr){
//             if(curr->next->data == key){
//                 Node *temp = curr->next;
//                 curr->next = temp->next;
//                 temp->next = NULL;
//                 free(temp);
//                 break;
//             }
//             curr = curr->next;
//         }
//     }
// }

// void reverseLinkedList(){
//     if(!head){
//         return;
//     } else {
//         Node *curr = head, *prev = NULL, *next = NULL;
//         while(curr){
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         tail = head;
//         head = prev;
//     }
// }

// void printLinkedList(){
//     Node *curr = head;
//     while(curr){
//         printf("%d ", curr->data);
//         curr = curr->next;
//     }
//     puts("");
// }


#include "linkedListTools.hpp"

// int main_test(){
//     // Create a linked list of 100 elements 
//     for(int i = 0; i < 10; i++){
//         pushTail(i);
//     }
//     printLinkedList();
//     // Remove the first element
//     popHead();
//     printLinkedList();
//     // Remove the last element
//     popTail();
//     printLinkedList();
//     // // Remove the element in the middle
//     // popMid(5);
//     // printLinkedList();
//     // // Add mid 
//     // pushMid(5,5);
//     // printLinkedList();
//     // // Add mid 
//     // pushMid(5,4);
//     // printLinkedList();
//     // Reverse the linked list
//     reverseLinkedList();
//     printLinkedList();
//     return 0;
// }

#include <bits/stdc++.h>
#include <string>
using namespace std;

class Base {
   public : static int val;
   static int func(int a) {
      cout << "\nStatic member function called";
      cout << "\nThe value of a : " << a;
      return 0;
   }
};
int Base::val=28;
int main() {
   Base b;
   Base::func(8);
   Base c;
   cout << "\nThe static variable value : " << b.val;
   cout << "\nThe static variable value3 : " << c.val;
   c.val = 30;
   cout << "\nThe static variable value4 : " << c.val;
   cout << "\nThe static variable value4 : " << b.val;

   void * a;
   a = *c;
   a->val;

   return 0;
}

int main__(){
    // problem: 2 ll combined in one ordered and printed
    // struct Node *h1 = nullptr, *t1= nullptr;
    // struct Node *h2= nullptr, *t2= nullptr;

    // pushTail(2, h1, t1);
    // pushTail(6, h1, t1);
    // pushTail(8, h1, t1);
    // pushTail(1, h1, t1);
    // printLinkedList(h1, t1);

    // pushTail(9, h2, t2);
    // pushTail(3, h2, t2);
    // pushTail(7, h2, t2);
    // printLinkedList(h2, t2);

    // struct Node *h3= nullptr, *t3= nullptr;
    // struct Node *tmp1 =h1; 
    // int a = 0;
    // while(tmp1){
    //     if(a < tmp1->data){
    //         a = tmp1->data;`
    //     }
    //     tmp1= tmp1->next;
    // }
    // struct Node *tmp2 =h2; 
    // a = 0;
    // while(tmp2){
    //     if(a < tmp2->data){
    //         a = tmp2->data;`
    //     }
    //     tmp2= tmp2->next;
    // }

}