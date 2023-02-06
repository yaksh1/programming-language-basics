package zQuestions.fSorting.CycleSort;

import java.util.Arrays;

//*----------------------------------------------------------------- */
//* return an array {missing number,duplicated number}
//*----------------------------------------------------------------- */
public class SetMismatch {
  public static void main(String[] args) {
    int[] nums = { 3, 6, 4, 2, 2, 7, 5, 8 };
    int[] answer = find(nums);
    System.out.println(Arrays.toString(answer));
  }

  static int[] find(int[] nums) {
    int i = 0;
    while (i < nums.length) {
      int correct = nums[i] - 1;
      if (nums[i] != nums[correct]) {
        swap(nums, i, correct);
      } else {
        i++;
      }
    }
    for (int j = 0; j < nums.length; j++) {
      if (nums[j] != j + 1) {
        return new int[]{j+1,nums[j]};
      }
    }
    return new int[]{-1,-1};
  }

  static void swap(int[] nums, int first, int second) {
    int temp = nums[first];
    nums[first] = nums[second];
    nums[second] = temp;
  }
}
