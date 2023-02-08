


public class ReverseNum {
  public static void main(String[] args) {
    int n = 1432;
    
    int base = (int) (Math.log10(n));
    System.out.println(find2(n,base));
  }
  
  
  static int sum = 0;
  
  static int find(int n) {
    if (n == 0)
    return 0;
    int rem = n % 10;
    sum = sum * 10 + rem;
    find(n / 10);
    return sum;
  }
  
  static int find2(int n,int base){
    if (n == 0)
    return 0;
    return (n % 10) * (int) (Math.pow(10, base)) + find2(n / 10, base - 1);
  }
}
