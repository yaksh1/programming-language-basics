package functions;

import java.util.Scanner;

public class Sum {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int n1 = in.nextInt();
      int n2 = in.nextInt();
      int ans = sum(n1, n2);
      System.out.println(ans);
    }
  }

  static int sum(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
  }

}
