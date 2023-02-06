package conditionals;

import java.util.Scanner;

public class Ternary {
  public static void main(String[] args) {
    try (Scanner input = new Scanner(System.in)) {
      int salary = input.nextInt();
      int answer = salary>10000 ? (salary+=2000) : (salary+=1000);
      System.out.println("your salary is: " + answer);
    }
  }
}
