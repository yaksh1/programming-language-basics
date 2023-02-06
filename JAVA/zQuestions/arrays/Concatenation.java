package zQuestions.arrays;

import java.util.Arrays;

public class Concatenation {
  public static void main(String[] args) {
    int[] nums = { 1, 2, 1 };
    int n = nums.length;
    int[] ans = new int[2 * n];
    for (int i = 0; i < 2*n; i++) {
      if (i < n) {
        ans[i] = nums[i];
      } else {
        ans[i] = nums[i-n];
      }
    }
    System.out.println(Arrays.toString(ans));
  }
}
