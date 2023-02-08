package zQuestions.gRecursions.sort;

import java.util.ArrayList;

// TO CHECK : if target is present in the array 
public class LinearSearch {
  public static void main(String[] args) {
    int[] a = { 3, 5, 2, 29, 29, 29, 38, 13 };
    int target = 5;
    System.out.println(find(a, target, 0));
    findAllIndex(a, 13, 0);
    System.out.println(list);

  }

  //to find if target is present
  static boolean find(int[] a, int target, int i) {
    if (i == a.length - 1) {
      return false;
    }

    return a[i] == target || find(a, target, i + 1);
  }
  
  //to find all indexes of the target
  static ArrayList<Integer> list = new ArrayList<Integer>();
  static void findAllIndex(int[] a, int target, int i) {
    if (i == a.length) {
      return;
    }
    if (a[i] == target) {
      list.add(i);
    }
    findAllIndex(a, target, i + 1);
  }
  
}
