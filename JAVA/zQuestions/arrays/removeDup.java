package zQuestions.arrays;

import java.util.Arrays;

public class removeDup {
  public static void main(String[] args) {
    int[] nums = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 3, 3 };
    System.out.println(find(nums));
  }

  static int find(int[] nums) {
    int count = nums.length;
    for (int i = 0; i < nums.length - 1; i++) {
      if (nums[i + 1] == nums[i]) {
        nums[i] = Integer.MAX_VALUE;
        count--;
      }
    }
    Arrays.sort(nums);
    return count;
  }
}
