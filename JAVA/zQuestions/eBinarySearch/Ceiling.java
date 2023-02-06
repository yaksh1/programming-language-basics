package zQuestions.eBinarySearch;

public class Ceiling {
  public static void main(String[] args) {
    int[] arr = { 2, 4, 5, 7, 9, 13, 18, 19 };
    int target = 15;
    System.out.println(find(arr, target));
  }

  //return the smallest number >= target
  static int find(int[] arr, int target) {
    int start = 0, end = arr.length - 1;
    //what if the target is greater than the greatest number in the array
    if (target > arr[arr.length - 1]) {
      return -1;
    }
    while (start <= end) {
      int mid = start + (end - start) / 2;
      if (target < arr[mid]) {
        end = mid - 1;
      } else if (target > arr[mid]) {
        start = mid + 1;
      } else {
        return arr[mid];
      }
    }
    return arr[start];
  }
}
