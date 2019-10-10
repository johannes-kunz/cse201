class ListNode {
  public:
    int data;
    ListNode *next;

    // create a single node with data d
    // and optional next node
    ListNode(int d, ListNode* nxt = NULL);

    // delete this node and all successor nodes
    ~ListNode();
};

class LinkedList {
  private:
    ListNode *first, *last;

  public:
    // create an empty list
    LinkedList();

    // destroy the list pointed to by first (if any)
    ~LinkedList();

    // display the list on std::cout
    void display();

    // add an element to the end of the list. Should be O(1).
    void append(int d);

    // add an element to the start of the list. Should be O(1).
    void prepend(int d);

    // return a *new* list that contains all elements smaller than
    // a threshold in this list
    LinkedList* filterSmaller(int threshold);
};
