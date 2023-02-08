

public class NumOfZeroes {
  public static void main(String[] args) {
    int n = 100129092;
    int count = 0;
    System.out.println(find(n, count));
  }
  
  static int find(int n, int count) {
    if (n == 0) {
      return count;
    }
    if (n % 10 != 0) {
      return find(n/10, count);
    } 
    return find(n/10, count + 1);
    
  }
}
