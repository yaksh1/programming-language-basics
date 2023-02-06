package yDSA.gMaths;

public class B_findOne {
  public static void main(String[] args) {
    int[] arr = { 2, 3, 4, 1, 2, 1, 3, 6, 4 };
    int xor =0;
    for (int element : arr) {
      xor ^= element;
    }
    System.out.println(xor);
  }
} 
