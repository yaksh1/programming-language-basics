package yDSA.aLinearSearch;

import java.util.Arrays;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int[] a = { 6, 4, 8, 24, 69, 77, 12, 34, 99, 420 };
      //*print the array
      System.out.println(Arrays.toString(a));

      //*input of the target
      System.out.print("enter target: ");
      int target = in.nextInt();
      
      //*printing the index
      int answer = find(a, target);
      System.out.println("Index: "+answer);
    }
  }

  //search in the array: return index if element is found
  //otherwise return -1
  static int find(int[] a, int target){
    if (a.length == 0)
      return -1;
    
    //run a for loop
    for (int i = 0; i < a.length; i++) {
      if (a[i] == target) {
        return i;
      }
    }
    //if element is not found
    return -1;
  }
}
