package yDSA.cSorting;

import java.util.Arrays;

public class MergeSort {
  public static void main(String[] args) {
    int[] a = { 5,6, 3, 4, 2, 1 };

    System.out.println(Arrays.toString(mergeSort(a)));
    // sortInplace(a, 0, a.length);
    // System.out.println(Arrays.toString(a));
  }


  //-----------------------------------------------------
  //      MERGE SORTING BY COPYING ARRAY
  //-----------------------------------------------------
  static int[] mergeSort(int[] a) {
    if (a.length == 1) {
      return a;
    }
    int mid = a.length / 2;

    int[] left = mergeSort(Arrays.copyOfRange(a, 0, mid));
    int[] right = mergeSort(Arrays.copyOfRange(a, mid, a.length));

    return merge(left, right);
  }

  static int[] merge(int[] left, int[] right) {
    int i = 0, j = 0, k = 0;

    int[] ans = new int[left.length + right.length];

    while (i < left.length && j < right.length) {
      if (left[i] < right[j]) {
        ans[k] = left[i];
        i++;
      } else {
        ans[k] = right[j];
        j++;
      }
      k++;
    }

    while (i < left.length) {
      ans[k] = left[i];
      i++;
      k++;
    }

    while (j < right.length) {
      ans[k] = right[j];
      k++;
      j++;
    }

    return ans;
  }


  //-----------------------------------------------
  //         MERGE INPLACE SORTING
  //-----------------------------------------------
  static void sortInplace(int[] a, int s, int e) {
    if (e - s == 1) {
      return;
    }

    int mid = (s + e) / 2;

    sortInplace(a, s, mid);
    sortInplace(a, mid, e);

    mergeInplace(a, s, mid, e);

  }

  static void mergeInplace(int[] a, int s, int mid, int e) {
    int[] mix = new int[e - s];

    int i = s;
    int j = mid;
    int k = 0;


    while (i < mid && j < e) {
      if (a[i] < a[j]) {
        mix[k] = a[i];
        i++;
      } else {
        mix[k] = a[j];
        j++;
      }
      k++;
    }
    
    //when one array is completed but other is left
    while (i < mid) {
      mix[k] = a[i];
      i++;
      k++;
    }

    while (j < e) {
      mix[k] = a[j];
      j++;
      k++;
    }

    //copying mix array into the original array
    for (int l = 0; l < mix.length; l++) {
      a[s + l] = mix[l];
    }
  }
}

