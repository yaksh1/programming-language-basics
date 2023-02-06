package zQuestions.Conditionals_And_loops;

import java.io.PrintStream;
import java.util.ArrayList;
import java.util.Scanner;


public class Average {
  private static final PrintStream p = System.out;
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      System.out.print("how many num: ");
      int n = in.nextInt();
      float avg = 0;
      ArrayList<Float> list = new ArrayList<Float>(10);
      for (int i = 0; i < n; i++) {
        list.add(in.nextFloat());
      }
      for (int i = 0; i < n; i++) {
        avg = avg + (list.get(i))/n;
      }
      p.println(avg);
    }
  }
}
