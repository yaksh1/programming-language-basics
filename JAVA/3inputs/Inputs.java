import java.util.Scanner;

public class Inputs {
  public static void main(String[] args) {
    try (Scanner input = new Scanner(System.in)) {

      //taking input of integer

      // System.out.print("Enter your roll number ");
      // int roll = input.nextInt();
      // System.out.println("your roll number is: " + roll);

      //taking input of string
      String name = input.nextLine();
      System.out.println(name);
    }
  }
}
