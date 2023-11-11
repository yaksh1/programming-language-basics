package zQuestions.Basic;

import java.util.Arrays;

public class FirstAndLast {
  public static void main(String[] args) {
    int[] arr = { 5, 7, 7, 8, 10, 11 };
    int target = 8;
    System.out.println((Arrays.toString(ans(arr, target))));
  }
  
  static int[] ans(int[] nums, int target) {
    int[] ans = { -1, -1 };

    ans[0] = find(nums, target, true);
    if (ans[0] != -1) {
      ans[1] = find(nums, target, false);
    }
    return ans;
  }
  

  static int find(int[] arr, int target, boolean startIndex) {
    int ans = -1;
    int start = 0;
    int end = arr.length - 1;
    while (start <= end) {
      int mid = start + (end - start) / 2;
      if (arr[mid] > target) {
        end = mid - 1;
      }else if (arr[mid] < target) {
        start = mid + 1;
      } else {
          ans=mid;
          if (startIndex) {
            end = mid - 1;
          } else {
            start = mid + 1;
          }
      }
    }
    return ans;
  }
}
