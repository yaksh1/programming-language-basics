package zQuestions.dfunctions;

import java.util.Scanner;

public class circle {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      float rad = in.nextInt();
      find(rad);
    }
  }

  private static void find(float rad) {
    float circum = (float) (2 * 3.14 * rad);
    float area = (float) (3.14 * rad * rad);
    System.out.println("circum: " + circum);
    System.out.println("area: " + area);
  }
  
}
