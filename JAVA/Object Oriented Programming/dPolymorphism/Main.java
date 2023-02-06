package dPolymorphism;

public class Main {
  public static void main(String[] args) {
    Shapes shape = new Shapes();
    Square sq = new Square();
    Triangle tri = new Triangle();
    
    //---------------- Same function name different output -----------------
    shape.area();
    sq.area();
    tri.area();

  }
}
