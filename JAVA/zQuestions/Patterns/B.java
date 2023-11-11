package zQuestions.Patterns;

public class B {
  public static void main(String[] args) {
    int n = 5;
    for (int i = 1; i <= 2 * n; i++) {
      int Cols = i > n ? 2 * n - i : i;
      // spaces
      int noSpaces = n - Cols;
      for (int j = 0; j < noSpaces; j++) {
        System.out.print(" ");
      }
      
      for (int j = 1; j <= Cols; j++) {
        if (j == 1 || j == Cols) {
          System.out.print(i+ " ");
        } else {
          System.out.print("  ");
        }
      }
      System.out.println();
    }
  }
}
