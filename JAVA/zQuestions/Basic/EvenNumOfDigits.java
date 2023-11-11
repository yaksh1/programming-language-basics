package zQuestions.Basic;

public class EvenNumOfDigits {
  public static void main(String[] args) {
    int[] nums = { 1, 34, 2, 64, 7896 };
    System.out.println(find(nums));
  }
  
  static int find(int[] nums) {
    if (nums.length == 0) {
      return 0;
    }
    int count = 0;
    for (int i = 0; i < nums.length; i++) {
      if (digit(nums[i])) {
        count++;
      }
    }
    return count;
  }

  static boolean digit(int a) {
    int count = 0;

    if (a < 0) {
      a = a * 1;
    }
    if (a == 0) {
      return false;
    }
    while (a > 0) {
      count++;
      a = a / 10;
    }
    return count % 2 == 0 ;
  }
}
