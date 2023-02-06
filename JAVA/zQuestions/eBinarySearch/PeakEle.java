package zQuestions.eBinarySearch;

public class PeakEle {
  public static void main(String[] args) {
    int[] arr = { 2, 4, 5, 6, 8, 5, 4, 2, 0 };
    System.out.println(find(arr));

  }
  static int find(int[] arr) {
    int start = 0, end = arr.length - 1;

    // condition to break the loop -> at the end start and end will point to same element
    while (start < end) {
      int mid = start + (end - start) / 2;

      if (arr[mid] > arr[mid + 1]) {
        // *we are in descending part -> arr[mid] > arr[mid + 1]
        // this maybe the answer but look at left
        // this is why end != mid-1
        end = mid;
      }
      //*we are in ascending part -> arr[mid] < arr[mid + 1]
      else {
        start = mid + 1;
      }
    }
    // as start == end in the end pointing to the greatest the number
    return start;
  }
}
