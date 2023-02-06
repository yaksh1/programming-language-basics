package zQuestions.dfunctions;

import java.util.Scanner;

public class MaxMin {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int n1 = in.nextInt();
      int n2 = in.nextInt();
      int n3 = in.nextInt();
      find(n1,n2,n3);
    }

  }

  private static void find(int n1, int n2, int n3) {
    int min = n1;
    if (n2 < min) {
      min = n2;
    }
    if (n3 < min) {
      min = n3;
    }
    System.out.print("min: ");
    System.out.println(min);
    int max = n1;
    if (n2 > max) {
      max = n2;
    }
    if (n3 > max) {
      max = n3;
    }
    System.out.print("max: ");
    System.out.println(max);
  }
}
