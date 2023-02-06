package zQuestions.Conditionals_And_loops;

import java.util.Scanner;


public class Armstrong {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      System.out.print("enter starting number: ");
      int start = in.nextInt();
      System.out.print("enter ending number: ");
      int end = in.nextInt();
      for (int i = start; i < end; i++) {
        if (find(i)) {
          System.out.print(i + " ");
        }
      }
    }
  }

  static boolean find(int n) {
    int original = n;
    int sum = 0;
    int rem = 0;
    while (n > 0) {
      rem = n % 10;
      sum += Math.pow(rem, 3);
      n /= 10;
    }
    return sum == original;
  }
}
