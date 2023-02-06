package zQuestions.eBinarySearch;

import java.util.Arrays;

public class FirstAndLastPosition {
  public static void main(String[] args) {
    int[] nums = { 2, 4, 6, 6, 6, 6, 9, 10, 18, 19 };
    int target = 6;
    System.out.println(Arrays.toString(searchRange(nums, target)));
  }

  static int[] searchRange(int[] nums, int target) {
    int[] ans = { -1, -1 };
    ans[0] = find(nums, target, true);
    ans[1] = find(nums, target, false);

    return ans;
  }

  static int find(int[] nums, int target,boolean findFirstOccurance) {
    int start = 0, end = nums.length - 1;
    int ans = -1;
    while (start <= end) {
      int mid = start + (end - start) / 2;
      if (target < nums[mid]) {
        end = mid - 1;
      } else if (target > nums[mid]) {
        start = mid + 1;
      } else {
        ans = mid;
        if (findFirstOccurance) {
          end = mid - 1;
        } else {
          start = mid + 1;
        }
      }
    }
    return ans;
  }
}
