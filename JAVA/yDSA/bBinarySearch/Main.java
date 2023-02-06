package yDSA.bBinarySearch;

import java.util.Arrays;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int[] nums = { 3, 5, 8, 9, 13, 17, 23, 29, 47, 60 };

      // *print the array
      System.out.println(Arrays.toString(nums));

      // *input of the target
      System.out.print("Enter Target: ");
      int target = in.nextInt();

      // *printing the index
      System.out.println(binarySearch(nums, target));
    }
  }

  //return the index
  //return -1 if does not exist
  static int binarySearch(int[] nums, int target) {
    int start = 0, end = nums.length - 1; // declaring the starting and ending index
    while (start <= end) {
      //find middle index
      int mid = start + (end - start) / 2;
      //if target is on left
      if (target < nums[mid]) {
        end = mid - 1;
      }
      //if target is on right side
      else if (target > nums[mid]) {
        start = mid + 1;
      }
      //if target is on the middle
      else {
        return mid;
      }
    }
    //this will execute if target is not present in the array
    return -1;
  }
}
