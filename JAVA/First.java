import java.lang.Math;
import java.util.Arrays;
import java.util.Scanner;

class First {
    public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      // int n = in.nextInt();
      int[] arr1 = { 9, 8, 3 };
      int[] arr2 = { 7, 5, 2 };
      System.out.println(Arrays.toString(merge(arr1, arr2)));     

      // for (int i = 0; i < n; i++) {
      //   System.out.println("========================");
      //   int arrLen = in.nextInt();
      //   System.out.println("========================");
      //   int arrLen2 = in.nextInt();
      //   System.out.println("========================");
      //   int[] arr1 = new int[arrLen];
      //   int[] arr2 = new int[arrLen2];
      //   for (int j = 0; j < arrLen; j++) {
      //     arr1[j] = in.nextInt();
      //   }
      //   System.out.println("========================");
      //   for (int j = 0; j < arrLen2; j++) {
      //     arr2[j] = in.nextInt();
      //   }
      //   System.out.println("========================");

      //   System.out.println(Arrays.toString(merge(arr1, arr2)));
      // }
    }
    public static int[] merge(int[] arr1,int[] arr2) {
      int i = 0;
      int j = 0;
      int[] ans = new int[arr1.length + arr2.length];
      int k = 0;
      while (i < arr1.length && j < arr2.length) {
        if (arr1[i] > arr2[j]) {
          ans[k] = arr1[i];
          i++;
        } else {
          ans[k] = arr2[j];
          j++;
        }
        k++;
      }

      if (i < arr1.length) {
        ans[k] = arr1[i];
        k++;
        i++;
      }
      if (j < arr2.length) {
        ans[k] = arr2[j];
        k++;
        j++;
      }
      return ans;
    }
}