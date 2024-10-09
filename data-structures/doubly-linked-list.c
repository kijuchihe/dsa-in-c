#include <stdio.h>
#include <stdlib.h>
// #include <iostream>
struct Node {
  int data;
  struct Node* next;
  struct Node* prev;
};

struct Node* createNode(int data) {
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->prev = NULL;
  newNode->next = NULL;
  return newNode;
};

struct Node* addToEnd(struct Node* head, int data) {
  struct Node* newNode = createNode(data);
  if (head == NULL) {
    return newNode;
  }
  // If not loop
  struct Node* temp = head;
  while (temp->next != NULL){
    temp = temp->next;
  }
  temp->next = newNode;
  newNode->prev = temp;
  return;
}

