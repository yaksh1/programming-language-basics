package cInheritance;

public class Main {
  public static void main(String[] args) {
    Base box1 = new Base();
    System.out.println(box1.h);
    Base box2 = new Base(4);
    System.out.println(box2.l + " " + box2.h + " " + box2.w);
    Base box3 = new Base(10, 5, 4);
    System.out.println(box3.l + " " + box3.h + " " + box3.w);

    //BoxWeight
    BoxWeight box4 = new BoxWeight(4,10);
    System.out.println(box4.h + " " + box4.l + " " + box4.w + " " + box4.weight);

    BoxWeight box5 = new BoxWeight(box4);
    System.out.println(box5.h + " " + box5.l + " " + box5.w + " " + box5.weight);

    BoxWeight box6 = new BoxWeight(3,4,5,6);
    System.out.println(box6.h + " " + box6.l + " " + box6.w + " " + box6.weight);
  }
}
