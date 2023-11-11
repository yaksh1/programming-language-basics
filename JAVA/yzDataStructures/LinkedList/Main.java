package yzDataStructures.LinkedList;

import java.util.LinkedList;

public class Main {
  public static void main(String[] args) {
    // LL list = new LL();

    // list.insertAtFirst(20);
    // list.insertAtLast(2);
    // list.insertAtLast(40);
    // list.insertAtLast(60);
    // list.display();
    // list.add(189);
    // list.display();

    // DoubleLL list = new DoubleLL();
    // list.insertAtFirst(12);
    // list.insertAtFirst(16);
    // list.insertAtFirst(13);
    // list.insertAtFirst(20);
    // list.insertAtFirst(6);
    // list.insertAtLast(65);
    // list.insertAtIndex(24, 2);

    // list.display();

    // CLL list = new CLL();
    // list.add(20);
        // list.add(2);
    // list.add(24);
    // list.add(22);
    // list.add(10);
    // list.add(50);
    // list.display();

    // list.delete(24);
    // list.display();

    LL list = new LL();

    list.insertAtFirst(30);
    list.add(20);
        list.add(25);
    list.add(10);
    list.add(120);
        list.display();
    
    list.insertRecur(3, 2);
    list.display();

  }
}
