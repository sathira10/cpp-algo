#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
  head = nullptr;
}

LinkedList::LinkedList(int v) {
  head = new ListNode(v);
}

void LinkedList::_append(int v, ListNode*& ptr) {
  if (ptr == nullptr)
    ptr = new ListNode(v);
  else
    _append(v, ptr->next);
}

void LinkedList::_print(ListNode*& ptr) {
  if (ptr == nullptr) return;
  std::cout << ptr->data << std::endl;
  _print(ptr->next);
}

void LinkedList::_remove(ListNode *ptr) {
  ListNode * help = ptr;
  ptr = ptr->next;
  delete help;
}

void LinkedList::removeFist() {
  ListNode * help = head->next;
  delete(head);
  head = help;
}

void LinkedList::_removeLast(ListNode *ptr) {
  if (ptr->next == nullptr) {
    _remove(ptr);
    ptr = nullptr;
  }
  else _removeLast(ptr->next);

}
void LinkedList::_removeElement(int i, ListNode *&ptr) {
  if (i == 0) {
    _remove(ptr);
  ptr = head;
  }
  else _removeElement(i-1, ptr->next);

}




