package zQuestions.arrays;
//*nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i]. */

import java.util.Arrays;

public class SmallerThanCurrent {
  public static void main(String[] args) {
    int[] nums = { 8, 1, 2, 2, 3 };
    int[] ans = new int[nums.length];
    for (int i = 0; i < nums.length; i++) {
      int count = 0;
      for (int j = 0; j < nums.length; j++) {
        if (j != i && nums[i] > nums[j]) {
          count++;
        }
        ans[i] = count;
      }
    }
    System.out.println(Arrays.toString(ans));
  }
}
