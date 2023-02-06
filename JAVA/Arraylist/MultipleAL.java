package Arraylist;

import java.util.ArrayList;
import java.util.Scanner;

public class MultipleAL {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      ArrayList<ArrayList<Integer>> list = new ArrayList<ArrayList<Integer>>();

      //initialization
      //lets say we want 3 list
      for (int i = 0; i < 3; i++) {
        list.add(new ArrayList<>());
      }

      //input
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          list.get(i).add(in.nextInt());
        }
      }

      //output
      System.out.println(list);
    }
  }
}
