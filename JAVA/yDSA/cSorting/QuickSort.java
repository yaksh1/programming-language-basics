package yDSA.cSorting;

import java.util.Arrays;

public class QuickSort {
  
  public static void main(String[] args) {
    int[] arr = { 5, 4, 3, 2, 1 };
    quick(arr, 0, arr.length-1);
    System.out.println(Arrays.toString(arr));
  }
  
  static void quick(int[] arr, int low, int high) {
    // if low passes high return
    if (low >= high) {
      return;
    }

    //  declaring start and end which will point which numbers to swap
    int s = low;
    int e = high;
    // middle element
    int m = s + (e - s) / 2;
    // pivot element
    int pivot = arr[m];
    
    // main while loop
    while (s <= e) {
      // violation condition
      while (arr[s] < pivot) {
        s++;
      }
      // violation condition
      while (arr[e] > pivot) {
        e--;
      }
      // again checking because if start> end condition will be checked after main while ends
      if (s <= e) {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
      }
    }
    //now pivot is at correct position -> recursion call for other two halves
    quick(arr, low, e);
    quick(arr, s, high);
  }
}
