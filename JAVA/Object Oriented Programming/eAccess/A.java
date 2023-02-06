package eAccess;

public class A {
  private int num; // to access private variables we need to create getters and setters
  String name;
  int[] arr;

  public int getNum() {
    return num;
  }

  public void setNum(int num) {
    this.num = num;
  }

  public A(int num, String name) {
    this.num = num;
    this.name = name;
    this.arr = new int[num];
  }
}
