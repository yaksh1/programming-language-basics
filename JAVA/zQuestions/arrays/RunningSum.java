package zQuestions.arrays;

import java.util.Arrays;

public class RunningSum {
  public static void main(String[] args) {
    int[] nums = { 1, 2, 3, 4 };
    int n = nums.length;
    int[] ans = new int[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += nums[i];
      ans[i] = sum;
    }
    System.out.println(Arrays.toString(ans));
  }
}
