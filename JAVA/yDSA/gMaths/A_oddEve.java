package yDSA.gMaths;

import java.util.Scanner;

//-----------------------------------------
//return true if even else false
//-----------------------------------------
public class A_oddEve {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int n = in.nextInt();
      System.out.println(find(n));
    }
  }

  static boolean find(int n) {
    return (n&1) == 0;
  }
}
