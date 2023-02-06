package zQuestions.gRecursions;

import java.util.Arrays;

public class BubbleSort {
  public static void main(String[] args) {
    int[] a = { 4,3,2,1};
    sort(a, a.length-1, 1);
    System.out.println(Arrays.toString(a));
  }

  static void sort(int[] a, int i, int j) {
    if (i == 0) {
      return;
    }

    if (j <= i) {
      if (a[j] < a[j - 1]) {
        swap(a, j, j - 1);
      }
      sort(a, i, j + 1);
    } else {
      sort(a, i - 1, 1);
    }
  }
  
  static void swap(int[] a, int first, int second) {
    int temp = a[first];
    a[first] = a[second];
    a[second] = temp;
  }

}
