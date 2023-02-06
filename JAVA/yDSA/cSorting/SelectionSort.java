package yDSA.cSorting;

import java.util.Arrays;

public class SelectionSort {
  public static void main(String[] args) {
    int[] nums = { 3, 7, 5, 10, 2, 45, -5, 12, 0 };
    selection(nums);
    System.out.println(Arrays.toString(nums));
  }
  
  static void selection(int[] nums) {
    for (int i = 0; i < nums.length; i++) {
      //find the maximum item in the remaining array and swap with the last index remaining
      int last = nums.length - i - 1;
      int maxIndex = max(nums, 0, last);
      swap(nums, last, maxIndex);
    }
  }
  
  //FUNCTION TO SWAP THE LAST INDEX AND MAX INDEX
  static void swap(int[] nums, int first, int second) {
    int temp = nums[first];
    nums[first] = nums[second];
    nums[second] = temp;
  }


  //FUNCTION TO RETURN THE MAX INDEX OF THE GREATEST ITEM
  static int max(int[] nums, int start, int end) {
    int max = start;
    for (int i = 0; i <= end; i++) {
      if (nums[i] > nums[max]) {
        max = i;
      }
    }
    return max;
  }
}
