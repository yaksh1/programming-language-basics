package zQuestions.fSorting.CycleSort;

//*------------------------------------------------------------ */
//*Find the Duplicate number in the array [1,n] with n+1 numbers*/
//*------------------------------------------------------------ */

public class Duplicate {
  public static void main(String[] args) {
    int[] nums = { 3, 1, 2, 6, 2, 5, 4 }; // n=6
    System.out.println(find(nums));
  }
  
  static int find(int[] nums) {
    int i = 0;
    while (i < nums.length) {
      if (nums[i] != i + 1) {
        int correct = nums[i]-1;
        if (nums[i] != nums[correct]) {
          swap(nums, i, correct);
        } else {
          return nums[i];
        }
      } else {
        i++;
      }
    }
    return -1;
  }

  static void swap(int[] nums, int first, int second) {
    int temp = nums[first];
    nums[first] = nums[second];
    nums[second] = temp;
  }
}
