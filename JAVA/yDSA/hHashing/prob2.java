package yDSA.hHashing;

import java.util.Scanner;

public class prob2 {
  public static void main(String[] args) {
    String s = "abcdabd";

    int[] hashArray = makeHashArray(s);
    find(hashArray);
  }
  
  static int[] makeHashArray(String s) {
    int[] hashArray = new int[26];
    for (int i = 0; i < s.length(); i++) {
      hashArray[s.charAt(i) - 'a']++;
    }
    return hashArray;
  }

  static void find(int[] hashArray) {
    Scanner in = new Scanner(System.in);
    System.out.print("Enter number of test cases:");

    int testCases = in.nextInt();
    System.out.println("================================");

    for (int i = 0; i < testCases; i++) {
      System.out.print("Enter character to find:");
      String find = in.next();
      System.out.print("it appears this many times:");
      System.out.println(hashArray[find.charAt(0)-'a']);
      System.out.println("================================");

    }
  }
}
