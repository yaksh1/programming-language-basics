

import java.util.Scanner;

public class Nto1 {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    find(n);
  }

  static void find(int n) {
    if (n == 0) {
      return;
    }

    find(n - 1);
    System.out.print(n + " ");
  }

}
