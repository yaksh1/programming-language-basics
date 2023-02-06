package yDSA.gMaths;

public class D_nthMagicNum {
  public static void main(String[] args) {
    int n = 6;
    int ans = 0;
    int base  =5;
    while (n > 0) {
      int last = n & 1;
      ans += last * base;
      base *= 5;
      n = n >> 1;
    }
    
    System.out.println(ans);
  }
}
