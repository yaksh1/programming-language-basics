package zQuestions.Conditionals_And_loops;

import java.io.PrintStream;
import java.util.Scanner;

public class factorial {
  private static final PrintStream p = System.out;

  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int n = in.nextInt();
      int mul=1;
      for (int i = n; i >= 1; i--) {
        mul *= i;
      }
      p.println(mul);
    }
  }
}
