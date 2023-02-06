package zQuestions.eBinarySearch;


public class RotatedArr {
  public static void main(String[] args) {
    int[] nums = {4,5,6,7,1,2,3};
    int target = 5;
    System.out.println(search(nums,target));

  }

  static int findPivot(int[] nums, int target) {
    int start = 0;
    int end = nums.length - 1;
    while (start < end) {
      int mid = start + (end - start) / 2;
      if (nums[mid] < nums[mid - 1]) {
        //you are in ascending part
        end = mid - 1;
      } else {
        // you are in descending part
        start = mid;
      }
    }
    //as end == start = peak element return start/end
    return start;
  }
  
  static int search(int[] nums, int target) {
    int pivot = findPivot(nums, target);
    //searching in the left part
    int firstTry = target(nums, target, 0, pivot);
    if (firstTry != -1) {
      return firstTry;
    }
    //if in first half element does not exist , search in second half
    return target(nums, target, pivot + 1, nums.length - 1);
  }
  
  static int target(int[] nums, int target, int start, int end) {
    //regular binary search of type ascending
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
    return -1;
  }
}
