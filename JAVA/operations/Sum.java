package operations;

import java.util.Scanner;

public class Sum {
  public static void main(String[] args) {
    try (Scanner input = new Scanner(System.in)) {
      int a = input.nextInt();
      int b = input.nextInt();
      
      int sum = a + b;
      System.out.println("sum:" + sum);
    }
  }
}
