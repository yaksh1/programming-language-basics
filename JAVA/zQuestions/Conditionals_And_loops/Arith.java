package zQuestions.Conditionals_And_loops;

  
import java.util.Scanner;

public class Arith {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int n = in.nextInt();
      int ans = subtractProductAndSum(n);
      System.out.println(ans);
    }
  }

  static int subtractProductAndSum(int n) {
    int sum = 0, prod = 1;
    while (n > 0) {
      int rem = n % 10;
      prod *= rem;
      sum += rem;
      n /= 10;
    }
    return prod - sum;
  }
}


