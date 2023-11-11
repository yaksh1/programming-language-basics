package zQuestions.Patterns;

public class E {
  public static void main(String[] args) {
    int n = 5;
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
      boolean chat = false;
      boolean num = false;

      for (int j = 1; j <= i; j++) {
        if (i % 2 == 0) {
          System.out.print(i - 1);
        } else {
          chat = true;
          System.out.print(ch);
        }
      }
      if (chat) {
        ch++;
      }
      System.out.println();
    }
  }
}
