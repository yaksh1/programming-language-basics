package zQuestions.fSorting.CycleSort;

//*------------------------------------------------------------ */
//*Find all the missing number in the array [1,n] with n  numbers*/
//*------------------------------------------------------------ */
import java.util.ArrayList;
import java.util.List;

public class AllMissing {
  public static void main(String[] args) {
    int[] nums = { 3, 6, 4, 2, 2, 4 };
    List<Integer> answer  = find(nums);
    System.out.println(answer);
  }
  
  static List<Integer> find(int[] nums) {
    int i = 0;
    while (i < nums.length) {
      if (nums[i] != nums[nums[i]-1]) {
        swap(nums, i, nums[i] - 1);
      } else {
        i++;
      }
    }

    // just the missing numbers
    List<Integer> ans = new ArrayList<Integer>();
    for (int j = 0; j < nums.length; j++) {
      if (nums[j] != j + 1) {
        ans.add(j + 1);
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
