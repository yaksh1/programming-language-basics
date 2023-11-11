package zQuestions.Basic;

public class MountainArray {
  public static void main(String[] args) {
    int[] arr = { 1, 2, 4, 5, 4, 3, 2, 1 };
    System.out.println(find(arr));
  }

  static int find(int[] nums) {
    int s = 0;
    int e = nums.length - 1;
    int mid = 0;
    while (s < e) {
      mid = s + (e - s) / 2;
      if (nums[mid] > nums[mid + 1]) {
        e = mid;
      } else if (nums[mid] < nums[mid + 1]) {
        s = mid + 1;
      }
    }
    return s;
  }
}
