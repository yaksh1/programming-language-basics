import java.util.Scanner;

public class Hello {
  public static void main(String[] args) {
    System.out.println("Hello");
    try (Scanner input = new Scanner(System.in)) {
      System.out.println(input.nextInt());
    }
  }
}