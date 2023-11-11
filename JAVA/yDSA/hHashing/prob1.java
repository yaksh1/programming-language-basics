package yDSA.hHashing;

import java.util.Scanner;

public class prob1 {
  public static void main(String[] args) {
    int[] a = makeArray();
    int[] hashArray = makeHashArray(a);
    ask(hashArray);
  }
  
  static int[] makeArray() {
    Scanner in = new Scanner(System.in);
    System.out.print("Enter array size: ");
    int arraySize = in.nextInt();
    int[] a = new int[arraySize];
    for (int i = 0; i < arraySize; i++) {
      System.out.println("Enter element " + i + ":");
      int element = in.nextInt();
      a[i] = element;
    }
    return a;
  }

  static int[] makeHashArray(int[] arr) {
    int[] hashArray = new int[12];
    for (int i = 0; i < arr.length; i++) {
      hashArray[arr[i]]++;
    }
    return hashArray;
  }

  static void ask(int[] hashArray) {
    Scanner in = new Scanner(System.in);
    System.out.print("Enter number of test cases:");

    int testCases = in.nextInt();
    System.out.println("================================");

    for (int i = 0; i < testCases; i++) {
      System.out.print("Enter number to find:");
      int find = in.nextInt();
      System.out.print("it appears this many times:");
      System.out.println(hashArray[find]);
      System.out.println("================================");

    }
  }
}
