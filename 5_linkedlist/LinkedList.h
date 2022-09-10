struct ListNode {
  int data;
  ListNode *next;

  ListNode(int v) {
    data = v;
    next = nullptr;
  }
  ListNode(int v, ListNode *n) {
    data = v;
    next = n;
  }
};

class LinkedList {
 public:
  // constructors
  LinkedList();
  LinkedList(int v);

  // public functions
  void append(int v) { _append(v, head); }
  void print() { _print(head); }
  void removeFist();
  void removeLast() { _removeLast(head); };
  void removeElement(int i) { _removeElement(i, head); };

 private:
  ListNode *head;

  // helper functions
  void _remove(ListNode *ptr);

  // recursive functions
  void _append(int v, ListNode *&p);
  void _print(ListNode *&ptr);
  void _removeLast(ListNode *ptr);
  void _removeElement(int i, ListNode *&ptr);
};
