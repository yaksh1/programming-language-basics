package zQuestions.eBinarySearch;

public class SearchInMountain {
  public static void main(String[] args) {
    int[] arr = { 1, 4, 5, 6, 8, 5, 4, 2, 0 };
    int target = 5;
    System.out.println(search(arr, target));
  }

  static int search(int[] arr, int target) {
    int peak = peakElement(arr, target);

    // try to search in first half
    int firstTry = binary(arr, target, 0, peak);
    if (firstTry != -1) {
      return firstTry;
    }
    // try to search in second half
    return binary(arr, target, peak + 1, arr.length - 1);
  }

  static int peakElement(int[] arr, int target) {
    int start = 0, end = arr.length - 1;
    while (start < end) {
      int mid = start + (end - start) / 2;
      if (arr[mid] < arr[mid + 1]) {
        start = mid + 1;
      } else {
        end = mid;
      }
    }
    return start;
  }

  static int binary(int[] arr, int target, int start, int end) {
    boolean isAsc = arr[start] < arr[end];
    while (start <= end) {
      int mid = start + (end - start) / 2;
      if(isAsc){
        if (target < arr[mid]) {
        end = mid - 1;
      } else if (target > arr[mid]) {
        start = mid + 1;
      } else {
        return mid;
      }
    } else{
      if (target < arr[mid]) {
        start = mid + 1;
      } else if (target > arr[mid]) {
        end = mid - 1;
      } else {
        return mid;
      }
      }
    }
    return -1;
  }
}
