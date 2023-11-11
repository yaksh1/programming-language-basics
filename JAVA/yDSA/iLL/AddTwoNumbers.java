package yDSA.iLL;

import java.util.Arrays;

public class AddTwoNumbers {
  
  public static void main(String[] args) {
    int[] l1 = { 9 };
    int[] l2 = { 1, 9, 9, 9, 9, 9, 9, 9, 9, 9 };
    
    addTwoNumbers(l1, l2);

  }
  
  public static void addTwoNumbers(int[] l1, int[] l2) {
    // l1 = reverseList(l1);
    // l2 = reverseList(l2);
    long num1 = 0;
    long num2 = 0;
    long ten = 1;
    int i = 0;
    int[] ans = new int[12];
  int j = 0;
    while (i < l1.length) {
      num1 += ten * l1[i];
      ten *= 10;
      i++;
    }
    i = 0;
    ten = 1;
    while (i < l2.length) {
      num2 += ten * l2[i];
      System.out.println(num2);
      i++;
      ten *= 10;
    }
    long sum = num1 + num2;
    System.out.println(num1);
    System.out.println(sum);

    if (sum <= 0) {
      insert(0,ans,j);
    }
    while (sum > 0) {
      long rem =  sum % 10;
      insert(rem, ans, j);
      sum /= 10;
    }
    System.out.println(Arrays.toString(ans));
  }
  
  public static void insert(long val, int[] ans, int j) {
    
    ans[j++] =(int) val;
  }
}
