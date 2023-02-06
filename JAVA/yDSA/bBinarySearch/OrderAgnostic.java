package yDSA.bBinarySearch;

import java.util.Arrays;
import java.util.Scanner;

public class OrderAgnostic {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int[] nums = { 45, 43, 37, 36, 27, 25, 21, 14, 9, 4, 0, -19, -30 };
      // *print the array
      System.out.println(Arrays.toString(nums));

      // *input of the target
      System.out.print("Enter Target: ");
      int target = in.nextInt();

      // *printing the index
      System.out.println(find(nums, target));
    }
  }

  static int find(int[] nums, int target) {
    int start = 0, end = nums.length - 1;
    if (nums[0] < nums[end]) {
      while (start <= end) {
        int mid = start + (end - start) / 2;
        if (target < nums[mid]) {
          end = mid - 1;
        } else if (target > nums[mid]) {
          start = mid + 1;
        } else {
          return mid;
        }
      }
    } else {
      while (start <= end) {
        int mid = start + (end - start) / 2;
        if (target < nums[mid]) {
          start = mid + 1;
        } else if (target > nums[mid]) {
          end = mid - 1;
        } else {
          return mid;
        }
      }
    }
    return -1;
  }
}
