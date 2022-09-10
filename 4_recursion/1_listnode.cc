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

int main() {
  // Initialization via constructor
  ListNode b(5);
  ListNode* p = new ListNode(4, nullptr);
}