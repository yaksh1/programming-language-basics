package yDSA.fRecursions;

public class A_intro {
  public static void main(String[] args) {
    // print number from 1 to 5
    num(1);
  }

  static void num(int n) {
    //base condition
    if (n == 5) {
      System.out.println(n);
      return;
    }
    //body
    System.out.println(n);
    //recursive call
    num(n + 1);
  }
}
