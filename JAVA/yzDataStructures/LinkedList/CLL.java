package yzDataStructures.LinkedList;

public class CLL {

  private Node head;
  private Node tail;

  public void add(int value) {
    Node node = new Node(value);
    if (head == null) {
      head = node;
      tail = node;
      node.next = head;
      return;
    }
    tail.next = node;
    node.next = head;
    tail = node;

  }

  public void display() {
    Node node = head;
    if (head != null) {
      do {
        System.out.print(node.value + " -> ");
        node = node.next;
      } while (node != head);
      System.out.println("Start");
    }
  }
  
  public void delete(int value) {
    Node node = head;
    if (node == null) {
      return;
    }
    if (head != null) {
      if (head.value == value) {
        head = head.next;
        tail.next = head;
        return;
      }
      do {
        if (node.next.value == value) {
          node.next = node.next.next;
          return;
        }
        node = node.next;
      } while (node.next != head);
    }
    
    

  }
  // ! <---- class node -----> //
  private class Node {
    private int value;
    private Node next;

    // ! constructor for value
    public Node(int value) {
      this.value = value;
    }

    // ! constructore for value and node
    public Node(int value, Node next) {
      this.value = value;
      this.next = next;
    }

  }
}
