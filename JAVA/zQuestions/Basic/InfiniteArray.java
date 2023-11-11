package zQuestions.Basic;

public class InfiniteArray {
  public static void main(String[] args) {
    int[] arr = { 2, 5, 7, 9, 10, 12, 15, 34, 58, 67, 69, 72, 75, 79, 80 };
    int target = 34;
    System.out.println(chunks(arr,target));
  }

  static int chunks(int[] nums, int target) {
    int start = 0;
    int end = 1;
    while (target > nums[end]) {
      int newStart = end + 1;
      end = end + (end - start + 1) * 2;
      start = newStart;
    }
    int ans = find(nums,target,start,end);
    return ans ;
  }

  static int find(int[] nums, int target, int start, int end) {
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
