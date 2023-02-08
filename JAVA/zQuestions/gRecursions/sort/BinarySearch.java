package zQuestions.gRecursions.sort;

public class BinarySearch {
  public static void main(String[] args) {
    int[] a = { 2, 4, 7, 9, 10, 35, 49 };
    int target = 9;
    System.out.println(find(a, target, 0, a.length - 1));
  }

  static int find(int[] a, int target, int start, int end) {

    if (start > end) {
      return -1;
    }

    //finding middle
    int mid = start + (end - start) / 2;

    //condition 1
    if (target < a[mid]) {
      return find(a, target, start, mid - 1);
    }
    //condition 2
    else if (target > a[mid]) {
      return find(a, target, mid + 1, end);
    }

    //condition 3
    return mid;
  }
}
