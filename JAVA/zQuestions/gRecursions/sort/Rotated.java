package zQuestions.gRecursions;

public class Rotated {
  public static void main(String[] args) {
    int[] a = { 5, 6, 7, 8, 9, 1, 2, 3 };
    int target = 9;
    System.out.println(find(a,target,0,a.length-1));
  }

  static int find(int[] a, int target, int s, int e) {
    if (s > e) {
      return -1;
    }

    int mid = s + (e - s) / 2;
    // case 1
    if (target == a[mid]) {
      return mid;
    }

    // case 2 from start to mid is sorted and target is between them
    if(a[s]<=a[mid]){
      if (target >= a[s] && target < a[mid]) {
        return find(a, target, s, mid - 1); //end=mid-1
      } else {
        return find(a, target, mid + 1, e); //start = mid+1
      }
      
    }

    //case 3  target is between mid and end
    if (target > a[mid] && target <= a[e]) {
      return find(a, target, mid + 1, e);
    } else {
      return find(a,target,s,mid-1);
    }
  }
}
