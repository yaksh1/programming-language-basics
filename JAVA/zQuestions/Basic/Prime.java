package zQuestions.Basic;

import java.util.Scanner;

public class Prime {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      System.out.print("Enter num:");
      int num = in.nextInt();

      boolean ans = true;
      for (int i = 2; i <= Math.sqrt(num); i++) {
        if (num % i == 0) {
          System.out.println("not prime");
          ans = false;
          break;
        }
      }
      if (num == 1) {
        System.out.print("not prime neither composite");
      }else if (ans == true) {
        System.out.println("prime");
      }
    }
  }
} 
