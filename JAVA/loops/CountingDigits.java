package loops;

public class CountingDigits {
  public static void main(String[] args) {
    long a = 3284222324l;
    int count = 0;
    while ( a > 0) {
      if (a % 10 == 2) {
        count++;
      }
      a /= 10;
    }
    System.out.println(count);
  }
}
