package zQuestions.Basic;

public class DuplicateRotated {
  public static void main(String[] args) {
    int[] nums = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1};
    int target = 0;
    System.out.println(search(nums,target));
  }
  
  public static boolean search(int[] nums, int target) {
    int pivot = pivot(nums);
    if (pivot == -1) {
      return binary(nums, target, 0, nums.length - 1);
    }
    return binary(nums, target, 0, pivot) || binary(nums, target, pivot + 1, nums.length - 1);
  }

  static int pivot(int[] nums) {
    int start = 0;
    int end = nums.length - 1;

    while (start < end) {
      int mid = start + (end - start) / 2;
      if (mid > start && nums[mid] < nums[mid - 1]) {
        return mid - 1;
      }
      if (mid < end && nums[mid] > nums[mid + 1]) {
        return mid;
      } else if (nums[start] >= nums[mid]) {
        end = mid - 1;
      } else if (nums[start] == nums[mid]) {
        start = start + 1;
      } 
      else {
        start = mid + 1;
      }
    }
    return -1;
  }

  static boolean binary(int[] arr, int target, int start, int end) {

    while (start <= end) {
      int mid = start + (end - start) / 2;
      if (arr[mid] > target) {
        end = mid - 1;
      } else if (arr[mid] < target) {
        start = mid + 1;
      } else {
        return true;
      }
    }
    return false;
  }
}
