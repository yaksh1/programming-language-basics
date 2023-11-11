package yDSA.iLL;

public class ReverseLL {
  public static void main(String[] args) {
    LL list = new LL();
    for (int i = 7; i > 0; i--) {
      list.add(i);
    }
    list.display();
    list.reverseInplace();
    list.display();
  }
}
