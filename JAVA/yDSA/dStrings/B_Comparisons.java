package yDSA.dStrings;

public class B_Comparisons {
  public static void main(String[] args) {
    String a = "hello";
    String b = "hello";
    System.out.println(a == b); //true

    b = new String("hello"); //creates new object outside the pool
    System.out.println(a == b); //false
    
    //to only check value
    System.out.println(a.equals(b)); //true

  }
}      
