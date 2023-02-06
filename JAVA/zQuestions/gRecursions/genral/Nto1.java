package zQuestions.gRecursions;

import java.util.Scanner;

public class Nto1 {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int n = in.nextInt();
      find(n);
    }
  }

  static void find(int n) {
    //base condition
    if (n == 0) {
      return;
    }
    //task
    System.out.print(n + " ");
    //recursive call
    find(n - 1);
  }
}
