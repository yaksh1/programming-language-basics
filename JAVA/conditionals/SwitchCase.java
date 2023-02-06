package conditionals;

import java.util.Scanner;

public class SwitchCase {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      System.out.print("enter two numbers: ");
      float num1 = in.nextInt();
      float num2 = in.nextInt();
      System.out.print("Enter operator: ");
      char operator = in.next().trim().charAt(0);

      switch (operator) {

        case '+':
          System.out.println(num1 + num2);
          break;
        case '-':
          System.out.println(num1 - num2);
          break;
        case '*':
          System.out.println(num1 * num2);
          break;
        case '/':
          if (num2 != 0) {
            System.out.println(num1 / num2);
          } else {
            System.out.println("cannot perform the operations");
          }
          break;
        case '%':
          System.out.println(num1 % num2);
          break;
        default:
          System.out.println("invalid operator");
      }
      
      //Advanced Switch Case
      System.out.print("enter day: ");
      int day = in.nextInt();
      switch (day) {
        case 1, 2, 3, 4, 5 -> System.out.println("weekday");
        case 6, 7 -> System.out.println("weekend");
        default -> System.out.println("invalid day");
      }
    }
  }
}
