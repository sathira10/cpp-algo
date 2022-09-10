#include <iostream>

using std::cout;
using std::endl;

struct ListNode {
  int data;
  ListNode* next;

  ListNode(int v) {
    data = v;
    next = nullptr;
  }
  ListNode(int v, ListNode* n) {
    data = v;
    next = n;
  }
};

class LinkedList {
 private:
  ListNode* head;

  // recursive functions
  void append(int v, ListNode*& ptr);
  void removeVal(int v, ListNode*& ptr);
  void removeDups(ListNode*& ptr);
  void print(ListNode*& ptr);
  void printReverse(ListNode*& ptr);
  void reverse(ListNode*& ptr);
  void removeLast(ListNode*& ptr);
  void remove(int i, ListNode*& ptr);
  void insert(int i, int v, ListNode*& ptr);
  int get(int i, ListNode*& ptr);
  int length(ListNode*& ptr);

  // non-recursive functions
  bool empty(ListNode*& ptr);
  void prepend(int v, ListNode*& ptr);
  void removeFirst(ListNode*& ptr);

 public:
  // constructors
  LinkedList() { head = nullptr; };
  LinkedList(int v) { head = new ListNode(v); };

  // recursive functions
  void append(int v) { append(v, head); };
  void removeVal(int v) { removeVal(v, head); };
  void removeDups() { removeDups(head); };
  void print() { print(head); };
  void printReverse() { printReverse(head); };
  void reverse() { reverse(head); };
  void removeLast() { removeLast(head); };
  void remove(int i) { remove(i, head); };
  void insert(int i, int v) { insert(i, v, head); };
  int get(int i) { return get(i, head); };
  int length() { return length(head); };

  // non-recursive functions
  bool empty();
  void prepend(int v);
  void removeFirst();
};

// Implementation

void LinkedList::print(ListNode*& ptr) {
  if (ptr == nullptr) return;
  cout << ptr->data << endl;
  print(ptr->next);
}

void LinkedList::append(int v, ListNode*& ptr) {
  if (ptr == nullptr)
    ptr = new ListNode(v);
  else
    append(v, ptr->next);
}

int main() {
  LinkedList L(4);
  L.append(6);
  L.append(6);
  L.append(6);
  L.append(6);
  L.print();
  return 0;
}