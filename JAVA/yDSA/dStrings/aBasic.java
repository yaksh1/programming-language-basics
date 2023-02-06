package yDSA.dStrings;

public class aBasic {
  public static void main(String[] args) {
    String name = "yaksh gandhi";
    System.out.println(name);
    name = "yaksh"; // creates another object in the string pool
    System.out.println(name);
  }
}
