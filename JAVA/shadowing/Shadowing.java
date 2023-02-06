package shadowing;

public class Shadowing {
  static int a = 100;
  public static void main(String[] args) {
    System.out.println(a); // this will print 100
    int a ; // the class variable at line 4 is shadowed by this
    // System.out.println(a); // scope will begin when value is initialized
    a = 20;
    System.out.println(a); // this will print 20
    test(); //100
  }

  private static void test() {
    System.out.println(a);//100
  }
}
