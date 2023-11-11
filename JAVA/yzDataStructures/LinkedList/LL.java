package yzDataStructures.LinkedList;

public class LL {
  private Node head;
  private Node tail;

  private int size;

  public LL() {
    size = 0;
  }

  //! add at first index
  public void insertAtFirst(int val) {
    Node node = new Node(val);
    node.next = head;
    head = node;

    if (tail == null) {
      tail = head;
    }

    size += 1;
  }
  //! add function
  public void add(int val) {
    Node node = new Node(val);
    Node temp = head;
    if (tail == null) {
      insertAtFirst(val);
      return;
    }
    while (temp.next != null) {
      temp = temp.next;
    }
    temp.next = node;
    tail = node;
    size++;
  }
  //! insert at last 
  public void insertAtLast(int val) {
    Node node = new Node(val);
    if (tail == null) {
      insertAtFirst(val);
      return;
    }
    tail.next = node;
    tail = node;
    size++;
  }
  //!insert at index
  public void insertAtIndex(int val, int index) {
    if (index == 0) {
      insertAtFirst(val);
      return;
    }
    if (index == size - 1) {
      insertAtLast(val);
      return;
    }
    Node currentNode = head;
    for (int i = 0; i < index - 1; i++) {
      currentNode = currentNode.next;
    }
    Node node = new Node(val, currentNode.next);
    currentNode.next = node;
    size++;
  }
  
  //! insert using recursion
  public void insertRecur(int value, int index) {
    head = insertRecur(value, index, head);
  }

  private Node insertRecur(int value, int index, Node node) {
    if (index == 0) {
      Node temp = new Node(value, node);
      size++;
      return temp;
    }
    node.next = insertRecur(value, index-1, node.next);
    return node;
  }
  //!delete at index
  public void deleteAtIndex(int index) {
    if (index == 0) {
      deleteAtFirst();
      return;
    }
    Node currentNode = head;
    for (int i = 0; i < index-1; i++) {
      currentNode = currentNode.next;
    }
    currentNode.next = currentNode.next.next;
    size--;
  }
  //! delete at first
  public void deleteAtFirst() {
    if (head == null) {
      return;
    }
    head = head.next;
    //*edge case
    if (head == null) {
      tail = head;
    }
    size--;
  }
  //! delete at last
  public void deleteAtLast() {
    if (size <= 1) {
      deleteAtFirst();
      return;
    }
    Node temp = head;
    while (temp.next.next != null) {
      temp = temp.next;
    }
    tail = temp;
    tail.next = null;
    size--;
  }
  //! display function
  public void display() {
    Node temp = head;
    if (temp == null) {
      System.out.println("List is empty");
      return;
    }
    while (temp != null) {
      System.out.print(temp.value + " -> ");
      temp = temp.next;
    }
    System.out.println("NULL");
  }

  //! find index of given value
  public int contains(int value) {
    Node temp = head;
    int count = 0;
    while (temp != null) {
      if (temp.value == value) {
        return count;
      }
      count++;
      temp = temp.next;
    }
    return -1;
  }

  //! <---- class node -----> //
  private class Node {
    private int value;
    private Node next;

    //! constructor for value
    public Node(int value) {
      this.value = value;
    }
    //! constructore for value and node
    public Node(int value, Node next) {
      this.value = value;
      this.next = next;
    }
    
  }
}
