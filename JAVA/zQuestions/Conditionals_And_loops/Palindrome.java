package zQuestions.Conditionals_And_loops;

import java.util.Scanner;

public class Palindrome {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      String str = in.nextLine();
      boolean ans = check(str);
      System.out.println(ans);
    }
  }

  static boolean check(String str) {
    String rev = "";
    for (int i = 0; i < str.length(); i++) {
      rev = rev + str.charAt(str.length() - i - 1);
    }
    return str.equals(rev);
  }
}
