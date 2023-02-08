package zQuestions.gRecursions.sort;

import java.util.Arrays;

public class SelectionSort {
  public static void main(String[] args) {
    int[] a = { 1,4,3,5 };
    sort(a, a.length, 0, 0);
    System.out.println(Arrays.toString(a));
  }

  static void sort(int[] a, int i, int j, int maxIndex) {
    if (i == 0) {
      return;
    }

    if (j < i) {
      if (a[j] > a[maxIndex]) {
        sort(a, i, j + 1, j);
      } else {
        sort(a, i, j + 1, maxIndex);
      }
    } else {
      swap(a, maxIndex, i-1);
      sort(a, i - 1, 0, 0);
    }
  }
  
  static void swap(int[] a, int first, int second) {
    int temp = a[first];
    a[first] = a[second];
    a[second] = temp;
  }
}
