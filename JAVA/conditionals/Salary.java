package conditionals;

import java.util.Scanner;

public class Salary {
  public static void main(String[] args) {
    try (// if salary>10000 give bonus of 2000 else give bonus of 1000
      Scanner input = new Scanner(System.in)) {
      System.out.print("enter your salary: ");
      int salary = input.nextInt();
      if (salary > 10000) {
        salary += 2000;
      } else {
        salary += 1000;
      }
      System.out.println("Your salary is: " + salary);
    }
  }
}
