package zQuestions.fSorting.CycleSort;

//*------------------------------------------------------------ */
//*Find the missing number in the array [0,n] with n  numbers*/
//*------------------------------------------------------------ */

public class MissingNumInRange {
  public static void main(String[] args) {
    int[] nums = { 0,4,1,3};
    
    System.out.println(find(nums));
  }

  static int find(int[] nums) {
    int i = 0;
    while (i < nums.length) {
      int correct = nums[i];
      if ( nums[i]<nums.length && nums[i] != nums[correct]) {
        swap(nums, i,correct);
      } else {
        i++;
      }
    }
    for (int j = 0; j < nums.length; j++) {
      if (nums[j] != j) {
        return j;
      }
    }
    return nums.length;
  }
  
  static void swap(int[] nums, int first, int second) {
    int temp = nums[first];
    nums[first] = nums[second];
    nums[second] = temp;
  }
}
