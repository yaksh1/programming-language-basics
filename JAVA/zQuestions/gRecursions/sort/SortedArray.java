package zQuestions.gRecursions.sort;

 // TO CHECK : if array is sorted or not sorted
public class SortedArray {
  public static void main(String[] args) {
    int a[] = { 3, 4, 1, 9, 10 };
    System.out.println(find(a,0));
  }

  static boolean find(int[] a, int i) {
    //base condition
    if (i == a.length - 1) {
      return true;
    }
    return a[i] < a[i + 1] && find(a, i + 1);
  }
}
