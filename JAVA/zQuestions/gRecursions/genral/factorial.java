

//TO CHECK: find the factorial of a number

public class factorial {
  public static void main(String[] args) {
    int n = 5;
    System.out.println(find(n));
  }

  static int find(int n) {
    if (n <= 1)
      return 1;
    return n * find(n - 1);
  }
}
