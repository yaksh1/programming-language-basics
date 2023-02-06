package functions;

//print all 3 digit armstrong numbers

public class Armstrong {
  public static void main(String[] args) {
    for (int i = 100; i < 1000; i++) {
      if (arm(i)) {
        System.out.println(i + " ");
      }
    }
  }
  
  static boolean arm(int n) {
      int original = n;
      int sum = 0;
      int a = 0;
      while (n > 0) {
        a = n % 10;
        sum += Math.pow(a, 3);
        n/=10;
      }
      return sum == original;
  }
}
