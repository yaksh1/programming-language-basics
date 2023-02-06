
public class SumOfDigits {
  public static void main(String[] args) {
    int n = 13244;
    System.out.println(find(n));
  }

  static int find(int n) {
    if (n == 0) {
      return 0;
    }
    return n%10 + find(n / 10);
  }
}
