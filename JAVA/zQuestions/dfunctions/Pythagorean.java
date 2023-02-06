package zQuestions.dfunctions;

import java.util.Scanner;

public class Pythagorean {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      System.out.println("Enter three numbers");
      int a = in.nextInt();
      int b = in.nextInt();
      int c = in.nextInt();
      System.out.println(find(a,b,c));
    }

  }

  static boolean find(int a, int b, int c) {
    return Math.pow(a, 2) + Math.pow(b, 2) == Math.pow(c, 2);
  }
}
