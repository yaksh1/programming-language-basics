package zQuestions.gRecursions;

import java.util.ArrayList;

public class ReturnList {
  public static void main(String[] args) {
    int[] a = { 4, 6, 3, 3, 7, 3, 8, 3 };
    int target = 3;
    //method 1 (use this)
    System.out.println(find(a, target, 0, new ArrayList<Integer>()));
    
    //method 2 not optimized
    System.out.println(findAllIndex2(a, target, 0));
  }

  // return a list without making outside function
  static ArrayList<Integer> find(int[] a, int target, int index, ArrayList<Integer> list1) {
    if (index == a.length) {
      return list1;
    }
    if (a[index] == target) {
      list1.add(index);
    }
    return find(a, target, index + 1, list1);
  }
  
  //return list without taking it in argument
  static ArrayList<Integer> findAllIndex2(int[] a, int target, int index) {
    ArrayList<Integer> list = new ArrayList<Integer>();
    if (index == a.length) {
      return list;
    }
    if (a[index] == target) {
      list.add(index);
    }

    ArrayList<Integer> ansFromBelowCalls = findAllIndex2(a, target, index + 1);
    
    list.addAll(ansFromBelowCalls);
    
    return list;
  }
}
