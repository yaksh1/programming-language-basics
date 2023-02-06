

public class StepsToZero {
  public static void main(String[] args) {
    int n = 14;
    System.out.println(helper(n));
  }
  
  static int find(int n, int count) {
    if (n == 0) {
      return count;
    }
    if (n % 2 == 0) {
      return find(n / 2, count + 1);
    }
    return find(n - 1, count + 1);
  }
  
  static int helper(int n) {
    int count = 0;
    return find(n, count);
 }
}
