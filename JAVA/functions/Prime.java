package functions;

import java.util.Scanner;

public class Prime {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int n = in.nextInt();
      String answer = isPrime(n);
      System.out.println(answer);
    }
  }

  static String isPrime(int n) {
    if (n <= 1) {
      return "enter number greater than 1";
    }
    for (int i = 2; i < n; i++) {
      if (n % i == 0) {
        return "not a prime";
      }
    }
    return "prime";
  }
}
