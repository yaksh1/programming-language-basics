package Arraylist;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      ArrayList<Integer> list = new ArrayList<>(10);
      //*to add
      // list.add(10);
      // list.add(90);
      // list.add(45);
      // list.add(2);
      // list.add(21);
      // list.add(1);

      //*to set */
      //list.set(3,91); //?index 3 = 91
      //*to remove */
      //list.remove(3); //?index 3 gets removed

      // System.out.println(list.contains(45)); //?checks if value exists in the arraylists
      // System.out.println(list);

      //input
      for (int i = 0; i < 5; i++) {
        list.add(in.nextInt());
      }

      //output
      for (int i = 0; i < 5; i++) {
        System.out.println(list.get(i)); //pass index here, list[index] will not work here
      }
    }
  }
}
