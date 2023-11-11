package zQuestions.Basic;

import java.util.Arrays;

public class TwoDarrays {
  public static void main(String[] args) {
    int[][] arr = {
        { 56, 34, 21 },
        { 67, 23, 1 },
        { 9, 76, 43 }
    };
    int target = 23;
    System.out.println(Arrays.toString(find(arr, target)));
  }
  
  static int[] find(int[][] arr,int target){
    if(arr.length==0){
      return new int[] { -1, -1 };
    }

    for (int i = 0; i < arr.length; i++) {
      for (int j = 0; j < arr[i].length; j++) {
        if (target == arr[i][j]) {
          return new int[] { i, j };
        }
      }
    }
    return new int[]{-1,-1};
  }
}
