package conditionals;

import java.util.Scanner;

public class UpperLower {
  public static void main(String[] args) {
    try (Scanner input = new Scanner(System.in)) {
      System.out.print("enter character: ");
      char ch = input.next().charAt(0);
      if(ch>='a' && ch<='z'){
        System.out.println("lowercase character");
      } else if(ch>='A' && ch<='Z') {
        System.out.println("uppercase character");
      } else {
        System.out.println("invalid character");
      }
    }
  }
}
