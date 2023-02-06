package yDSA.cSorting;

import java.util.Arrays;


public class BubbleSort {
  public static void main(String[] args) {
    int[] nums = { 3, 7, 5, 10, 2, 45, -5, 12, 0 };
    bubble(nums);
    System.out.println(Arrays.toString(nums));
  }
  
  static void bubble(int[] nums) {
    boolean swapped;
    // run the loop n-1 times
    for (int i = 0; i < nums.length; i++) {
      //declare a  boolean  value to break if no swaps occurs
      swapped = false;
      //for each iteration the max value will come at last respective index
      for (int j = 1; j < nums.length - i; j++) {
        //swap if the item is smaller than the previous item
        if (nums[j - 1] > nums[j]) {
          //swap
          swap(nums, j, j - 1);
          swapped = true;
        }
        //if no swap occurs then swapped = false , therefore break;
      }
      if (!swapped) {
        break;
      }
    }
  }
  
  static void swap(int[] nums, int first, int second) {
    int temp = nums[first];
    nums[first] = nums[second];
    nums[second] = temp;
  }
}
