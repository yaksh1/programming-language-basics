package yDSA.iLL;

import java.util.Stack;

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


  //!Reverse inplace
  public void reverseInplace() {
    Node prev = null;
    Node present = head;
    Node nextNode = head.next;
    while (present != null) {
      present.next = prev;
      prev = present;
      present = nextNode;
      if (nextNode != null) {
        nextNode = nextNode.next;
      }
    }
    head = prev;
  }

  public Node addNumbers(Node l1, Node l2) {
    l1 = reverseList(l1);
    l2 = reverseList(l2);
    int num1 = 0;
    int num2 = 0;
    int ten = 1;
    while (l1 != null) {
      num1 += ten * l1.value;
      l1 = l1.next;
      ten *= 10;
    }
    ten = 1;
    while (l2 != null) {
      num2 += ten * l2.value;
      l2 = l2.next;
      ten *= 10;
    }
    int sum = num1 + num2;
    // if (sum <= 0) {
    //   insert(sum);
    // }
    // while (sum > 0) {
    //   int rem = sum % 10;
    //   insert(rem);
    //   sum /= 10;
    // }
    System.out.println(sum);
    return head;

  }

  public void insert(int val) {
    Node node = new Node(val);
    Node temp = head;
    if (temp == null) {
      head = node;
      return;
    }
    while (temp.next != null) {
      temp = temp.next;
    }
    temp.next = node;
  }

  public Node reverseList(Node head) {
    if (head == null || head.next == null)
      return head;
    Node prev = null;
    Node pres = head;
    Node next = pres.next;

    while (pres != null) {
      pres.next = prev;
      prev = pres;
      pres = next;
      if (next != null) {
        next = next.next;
      }
    }
    return prev;
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
