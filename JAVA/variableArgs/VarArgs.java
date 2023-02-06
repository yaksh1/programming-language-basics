package variableArgs;

public class VarArgs {
  public static void main(String[] args) {
    int answer = test(1, 5, 7, 4, 7, 10, 24);
    System.out.println(answer);
  }
  
  static int test(int... v) {
    int sum=0;
    for (int i = 0; i < v.length; i++) {
      sum = sum + v[i];
    }
    return sum;
  }
}
