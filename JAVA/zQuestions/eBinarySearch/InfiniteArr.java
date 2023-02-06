package zQuestions.eBinarySearch;

public class InfiniteArr {
  public static void main(String[] args) {
    int[] nums = { 3, 6, 8, 10, 13, 19, 25, 28, 29, 35, 39 };
    int target = 25;
    System.out.println(answer(nums,target));
  }

  static int answer(int[] nums, int target) {
    //first start with box of size 2;
    int start = 0;
    int end = 1;

    while (target > nums[end]) {
      int newStart = end + 1;

      //double the size of the box
      // new end = previous end + 2*size
      int newEnd = end + (end - start + 1) * 2;
      if(newEnd<nums.length -1){
        end = newEnd;
      } else {
        end = nums.length - 1;
      }
      start = newStart;
    }
    return find(nums, target, start, end);
  }

  static int find(int[] nums, int target,int start,int end) {
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
