package arrays;

import java.util.Scanner;

public class basic {
  public static void main(String[] args) {
    // syntax
    //datatype[] var_name = new datatype[size];
    //Q store 500 roll numbers
    //*  int[] roll = new int[500];
    // or directly
    //*  int[] roll2 = { 234, 454, 3421 };

    int[] a; //declaration of the array. ros is getting defined in the stack memory
    a = new int[5]; // initialization: actually here object is being created in the heap memory

    try (Scanner in = new Scanner(System.in)) {
      for (int i = 0; i < a.length; i++) {
        System.out.print("Enter number " + (i + 1) + " : ");
        a[i] = in.nextInt();
      }
      
      // for (int i = 0; i < a.length; i++) {
      //   System.out.print(a[i] + " ");
      // }

      //! ADVANCED FOR LOOP
      for (int num : a) { //for every number in the array print the number
        System.out.print(num + " "); // here num represents the element in the array
      }
    }
  }
}
