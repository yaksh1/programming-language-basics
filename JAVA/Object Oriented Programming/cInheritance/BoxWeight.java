package cInheritance;

public class BoxWeight extends Base {
  double weight;

  BoxWeight() {
    this.weight = -1;
  }

  BoxWeight(double side, double weight) {
    super(side); // use to initialize values present in parent class
    this.weight = weight;
  }

  BoxWeight(BoxWeight old) {
    super(old);
    this.weight = old.weight;
  }

  BoxWeight(double l, double h, double w, double weight) {
    super(l, h, w);
    this.weight = weight;
  }
}
