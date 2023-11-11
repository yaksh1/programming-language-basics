package zQuestions.Basic;

public class RotatedBinary {
  public static void main(String[] args) {
    int[] nums = { 8, 9, 10, 12, 2, 3, 4, 5, 6, 7 };
    int target = 4;
    System.out.println(find(nums,target));
  }
  
  static int find(int[] nums, int target) {
    int pivot = pivot(nums);
    int firstTry = binary(nums, target, 0, pivot);
    if (firstTry == -1) {
      return binary(nums, target, pivot + 1, nums.length - 1);
    }
    return firstTry;
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
      } else {
        start = mid + 1;
      }
    }
    return -1;
  }
  
  static int binary(int[] arr, int target, int start,int end) {

    while (start <= end) {
      int mid = start + (end - start) / 2;
      if (arr[mid] > target) {
        end = mid - 1;
      } else if (arr[mid] < target) {
        start = mid + 1;
      } else {
        return mid;
        }
      }
    return -1;
  }
}
