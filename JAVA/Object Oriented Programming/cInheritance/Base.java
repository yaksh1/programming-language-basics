package cInheritance;

public class Base {
  double l;
  double h;
  double w;

  Base() {
    this.l = -1;
    this.h = -1;
    this.w = -1;
  }

  //cube
  Base(double side) {
    this.l = side;
    this.h = side;
    this.w = side;
  }

  //cuboid
  Base(double l, double h, double w) {
    this.l = l;
    this.h = h;
    this.w = w;
  }

  // old box
  Base(Base old) {
    this.h = old.h;
    this.l = old.l;
    this.w = old.w;
  }

  public void display() {
    System.out.println("Base class");
  }
}
