package yzDataStructures.LinkedList;

public class DoubleLL {
  private Node head;

  //! <---- insert at first -----> //
  public void insertAtFirst(int val)
  {
    Node node = new Node(val);
    node.next = head;
    node.prev = null;
    if (head != null) {
      head.prev = node;
    }
    head = node;
  }

  //! <---- insert at index -----> //
  public void insertAtIndex(int val, int index) {
    Node temp = head;
    for (int i = 0; i < index - 1; i++) {
      temp = temp.next;
    }
    Node node = new Node(val, temp.next, temp);
    if (temp.next != null) {
      
      temp.next.prev = node;
    }
    temp.next = node;
  }
  
  //! insertion at last
  public void insertAtLast(int value) {
    if (head == null) {
      insertAtFirst(value);
      return;
    }
    Node node = head;
    while (node.next != null) {
      node = node.next;
    }
    node.next = new Node(value,null,node);
  }

  //! <---- display -----> //
  public void display() {
    if (head == null) {
      System.out.println("List is empty");
      return;
    }
    Node temp = head;
    Node last = null;

    System.out.print("START" + " -> ");
    while (temp != null) {
      System.out.print(temp.value + " -> ");
      last = temp;
      temp = temp.next;
    }
    System.out.println("END");

    System.out.println("---------Printing in reverse--------");
    System.out.print("END" + " -> ");
    while (last != null) {
      System.out.print(last.value + " -> ");
      last = last.prev;
    }
    System.out.println("START");
  }

  //! <---- node class -----> //
  private class Node {
    int value;
    Node next;
    Node prev;


    public Node(int value) {
      this.value = value;
    }
    public Node(int value, Node next, Node prev) {
      this.value = value;
      this.next = next;
      this.prev = prev;
    }

    
  }
}
