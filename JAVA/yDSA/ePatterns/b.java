package yDSA.ePatterns;

import java.util.Scanner;

/* 
2.  *
    **
    ***
    ****
    ***** 
*/
public class b {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      System.out.print("Enter number:");
      int n = in.nextInt();
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
          System.out.print("*");
        }
        System.out.println();
      }
    }
  }
}
