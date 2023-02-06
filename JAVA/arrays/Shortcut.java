package arrays;

import java.util.Arrays;
import java.util.Scanner;

public class Shortcut {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int arr[] = new int[10];
      for (int i = 0; i < arr.length; i++) {
        arr[i] = in.nextInt();
      }
      // toString method
      System.out.println(Arrays.toString(arr));
    }
  }
}
