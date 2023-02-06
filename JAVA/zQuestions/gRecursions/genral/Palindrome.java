package zQuestions.gRecursions;

public class Palindrome {
  
  public static void main(String[] args) {
    int n = 123421;
    System.out.println(palin(n));
  }
  
  static boolean palin(int n) {
    int base = (int) (Math.log10(n)); // number of digits -1
    return n == rev(n, base);
  }
  

  static int rev(int n,int base) {
    if (n == 0)
      return 0;

    return  (n % 10) * (int) (Math.pow(10, base)) + rev(n/10,base-1) ;

  }
}
