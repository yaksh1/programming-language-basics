package zQuestions.Basic;

// *Find out ceiling of a number

public class Ceiling {
  public static void main(String[] args) {
    int[] num = { 1, 5, 8, 9, 12, 15, 17, 19, 25, 27 };
    int target = 30;
    System.out.println(find(num,target));
  }

  static int find(int[] num, int target) {
    int start = 0;
    int end = num.length - 1;

    if (target >= num[end]) {
      return -1;
    }

    while (start <= end) {
      int mid = start + (end - start) / 2;
      if (num[mid] == target) {
        return num[mid];
      } else if (num[mid] < target) {
        start = mid + 1;
      } else {
        end = mid - 1;
      }
    }
    return num[start];
  }
}
