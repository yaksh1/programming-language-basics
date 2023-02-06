package zQuestions.fSorting.CycleSort;

import java.util.ArrayList;
import java.util.List;


//*----------------------------------------------------------------- */
//*Find all the Duplicate number in the array [1,n] with n numbers*/
//*----------------------------------------------------------------- */
public class AllDuplicates {
  public static void main(String[] args) {
    int[] nums = { 3, 6, 4, 2, 2, 7, 6, 8 };
    List<Integer> answer = find(nums);
    System.out.println(answer);
  }

  static List<Integer> find(int[] nums) {
    int i = 0;
    List<Integer> ans = new ArrayList<Integer>();
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
        ans.add(nums[j]);
      }
    }
    return ans;
  }

  static void swap(int[] nums, int first, int second) {
    int temp = nums[first];
    nums[first] = nums[second];
    nums[second] = temp;
  }
}
