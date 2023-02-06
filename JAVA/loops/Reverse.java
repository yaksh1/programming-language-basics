package loops;

import java.util.Scanner;

public class Reverse {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int n = in.nextInt();
      int a,res=0;
      while (n > 0) {
        a = n % 10;
        n /= 10;
        res = (res * 10 + a);
      }
      System.out.print(res);
    }
  }
}
