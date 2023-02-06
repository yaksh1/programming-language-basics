package dPolymorphism;

public class Circle extends Shapes {
  //this will run when obj of circle is created
  //hence it is overriding the Shapes class
  @Override // this is an annotation
  void area() {
    System.out.println("area = pi*r*r");
  }
}
