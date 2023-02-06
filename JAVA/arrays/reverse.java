package arrays;

import java.util.Scanner;

public class reverse {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      System.out.print("How many number do want to input: ");
      int n = in.nextInt();
      int[] arr = new int[n];
      //input
      for (int i = 0; i < n; i++) {
        System.out.print("Number " + (i+1) + ": ");
        arr[i]= in.nextInt();
      }
      //output
      for (int i = 0; i < n; i++) {
        System.out.print(arr[i] + " ");
      }

      //reverse function
      rev(arr,n);
    }
  }

  private static void rev(int[] arr, int n) {
    //swapping the elements
    for (int i = 0; i < n / 2; i++) {
      int temp = arr[i];
      arr[i] = arr[n - 1 - i];
      arr[n - i - 1] = temp;
    }
    System.out.println();
    //printing the reverse array
    for (int i = 0; i < n; i++) {
      System.out.print(arr[i] + " ");
    }
  }
}
