package zQuestions.Conditionals_And_loops;

import java.util.Scanner;

public class fibo {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      System.out.print("Which element number do you want: ");
      int n = in.nextInt();
      int ans = fibonacci(n);
      System.out.println(ans);
    }
  }
  
  static int fibonacci(int n) {
    int a = 0, b = 1, c = 0;

    if (n == 0) {
      return 0;
    }
    if (n == 1) {
      return 1;
    }
    for (int i = 2; i <= n; i++) {
      c = a + b;
      a = b;
      b = c;
    }
    return c;
  } 
}
