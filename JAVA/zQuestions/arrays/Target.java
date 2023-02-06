package zQuestions.arrays;

import java.util.Arrays;

public class Target {
  public static void main(String[] args) {
    int[] nums = { 0, 1, 2, 3, 4 };
    int[] index = { 0, 1, 2, 2, 1 };
    int[] target = new int[nums.length];
    
    for (int i = 0; i < target.length; i++) {
      target[index[i]] = nums[i];
    }
    System.out.println(Arrays.toString(target));
  }
}
