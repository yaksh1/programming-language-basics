package zQuestions.dfunctions;

import java.util.Scanner;

public class EveOdd {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int n = in.nextInt();
      String ans = find(n);
      System.out.println(ans);
    }
  }

  static String find(int n) {
    if (n % 2 == 0) {
      return "even";
    }
    return "odd";
  }
}
