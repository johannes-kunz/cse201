#include <iostream>

#include "LinkedList.hpp"
// create a single node with data d
// and optional next node
ListNode::ListNode(int d, ListNode* nxt){
  data = d;
  next = nxt;
}

// delete this node and all successor nodes
ListNode::~ListNode(){
  if(next) delete next;
}


// create an empty list
LinkedList::LinkedList(){
  first = NULL;
  last = NULL;
}

// destroy the list pointed to by first (if any)
LinkedList::~LinkedList(){
  if(first){
    delete first;
  }
}

// display the list on std::cout
void LinkedList::display(){
  ListNode* next = first;
  while(next){
    std::cout << next->data << " ";
    next = next->next;
  }
  std::cout << std::endl;
}

// add an element to the end of the list. Should be O(1).
void LinkedList::append(int d){
  ListNode* n = new ListNode(d, NULL);
  if(last){
    last->next = n;
    last = n;
  } else {
    last = n;
    first = n;
  }
}

// add an element to the start of the list. Should be O(1).
void LinkedList::prepend(int d){

  if(first){
    ListNode* n = new ListNode(d, first);
    first = n;
  } else {
    ListNode* n = new ListNode(d, NULL);
    last = n;
    first = n;
  }
}

// return a *new* list that contains all elements smaller than
// a threshold in this list
LinkedList* LinkedList::filterSmaller(int threshold){
  LinkedList* f = new LinkedList();
  ListNode* next = first;
  while(next){
    if(next->data < threshold){
      f->append(next->data);
    }
    next = next->next;
  }
  return f;
}
