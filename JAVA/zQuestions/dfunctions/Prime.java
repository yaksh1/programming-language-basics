package zQuestions.dfunctions;

import java.util.Scanner;

public class Prime {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int num = in.nextInt();
      String ans = find(num);
      System.out.println(ans);
    }
  }

  static String find(int num) {
    if (num <= 1) {
      return "enter number greater than 1";
    }
    for (int i = 2;i<=num/2; i++) {
      if (num % i == 0) {
        return "not prime";
      }
    }
    return "prime";
  } 
}
