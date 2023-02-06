package bStatic;
public class StaticBlock {
  static int a = 4;
  static int b;

  static {
    //this will only run once i.e when first object is created
    System.out.println("i m in a static block");
    b = a + 5;
  }

  public static void main(String[] args) {
    StaticBlock obj = new StaticBlock();
    System.out.println(obj.a + " " + obj.b);

    StaticBlock obj2 = new StaticBlock();
    System.out.println(obj2.a + " " + obj2.b);
    
  }
}
