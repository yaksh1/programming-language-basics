package loops;

import java.util.Scanner;


// import java.util.Scanner;


public class Fibonacci {
  public static void main(String[] args) {
    //Find nth fibonacci number
    int a = 0;
    int b = 1;
    int c = 0;
    try (Scanner in = new Scanner(System.in)) {
      int n = in.nextInt();
      for (int i = 0; i < n-1; i++) {
        c = a + b;
        a = b;
        b = c;
      }
      System.out.println(c);
    }
  }
}
