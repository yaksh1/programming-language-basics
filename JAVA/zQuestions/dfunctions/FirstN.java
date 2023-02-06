package zQuestions.dfunctions;

import java.util.Scanner;

public class FirstN {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int n = in.nextInt();
      int ans = find(n);
      System.out.println(ans);
    }
  }

  static int find(int n) {
    if (n == 0) {
      return 0;
    }
    return n + find(n-1);
  }
}
