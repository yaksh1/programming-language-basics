package zQuestions.Basic;

import java.util.Scanner;

public class SimpleInterest {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      System.out.print("input principal: ");
      float principal = in.nextInt();
      System.out.print("input Rate in percentage: ");
      float rate = in.nextInt();
      System.out.print("input time in years: ");
      float time = in.nextInt();

      float amount = principal*(1+ (rate/100)*time);
      System.out.println(amount);
    }

  }
}
