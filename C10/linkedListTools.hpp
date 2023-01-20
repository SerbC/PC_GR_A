#pragma once
#ifndef LLT
#define LLT
struct Node;
struct Node *createNode(int data);
void pushHead(int data, Node *&head, Node*&tail);
void pushTail(int data,Node *&head, Node*& tail);
void popHead(Node *&head, Node*& tail);
void popTail(Node *&head, Node*& tail);
void reverseLinkedList(Node *&head, Node*& tail);
void printLinkedList(Node *head, Node* tail);
#endif //LLT