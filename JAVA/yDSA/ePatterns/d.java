package yDSA.ePatterns;


/*
6.       *
        **
       ***
      ****
     ***** */

public class d {
  public static void main(String[] args) {
    for (int i = 0; i < 5; i++) {
      int spaces = 5 - i - 1;
      for (int j = 0; j < spaces; j++) {
        System.out.print(" ");
      }
      for (int j = 0; j < i + 1; j++) {
        System.out.print("*");
      }
      System.out.println();
    }
  }
}
