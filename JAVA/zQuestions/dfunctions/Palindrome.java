package zQuestions.dfunctions;

import java.util.Scanner;

public class Palindrome {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int n = in.nextInt();
      boolean ans = find(n);
      System.out.println(ans);
    }
  }

  static boolean find(int n) {
    int rev = 0;
    int a = 0;
    int original = n;
    while (n > 0) {
      a = n % 10;
      rev = rev*10 + a; 
      n /= 10;
    }
    return rev == original;
  }
}
