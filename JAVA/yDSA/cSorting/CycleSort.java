package yDSA.cSorting;

import java.util.Arrays;

public class CycleSort {
  public static void main(String[] args) {
    int[] nums = { 5, 2, 1, 4, 3 };
    cycle(nums);
    System.out.println(Arrays.toString(nums));
  }

  static void cycle(int[] nums) {
    int i = 0;
    while (i < nums.length) {
      if (nums[i] != nums[nums[i]-1]) {
        swap(nums, i, nums[i]-1);
      } else {
        i++;
      }
    }
  }

  static void swap(int[] nums, int first, int second) {
    int temp = nums[first];
    nums[first] = nums[second];
    nums[second] = temp;
  }
}
