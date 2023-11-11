package zQuestions.Basic;

public class MinNumber {
  public static void main(String[] args) {
    int[] num = { 2, 4, 5, 9, 1, 8 };
    System.out.println(findMin(num));
  }

  static int findMin(int[] num) {
    int min = num[0];
    for (int i = 0; i < num.length; i++) {
      if (num[i] < min) {
        min = num[i];
      }
    }
    return min;
  }
}