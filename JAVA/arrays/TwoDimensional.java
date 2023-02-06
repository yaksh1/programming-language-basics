package arrays;

import java.util.Arrays;
import java.util.Scanner;

public class TwoDimensional {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int[][] a = new int[3][3];

      // input
      for (int i = 0; i < a.length; i++) { // array.length always gives number of rows
        for (int j = 0; j < a[i].length; j++) {
          a[i][j] = in.nextInt();
        }
      }
      // output
      // for (int i = 0; i < a.length; i++) {
      //   for (int j = 0; j < a[i].length; j++) {
      //     System.out.print(a[i][j] + " ");
      //   }
      //   System.out.println();
      // }

      //*------------------------------------------------
      //*              toString method 
      //*------------------------------------------------

      // for (int i = 0; i < a.length; i++) {
      //   System.out.println(Arrays.toString(a[i]));
      // }

      // *------------------------------------------------
      // *            Advanced for loop
      // *------------------------------------------------

      for (int[] arr: a ) {
        System.out.println(Arrays.toString(arr));
      }
    }
  }
}
