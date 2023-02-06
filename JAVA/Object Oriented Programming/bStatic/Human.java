package bStatic;

public class Human {
  int age;
  String gender;
  boolean alive;
  static long population; // common to all human beings but not logically relate to the object

  public Human(int age, String gender, boolean alive) {
    this.age = age;
    this.gender = gender;
    this.alive = alive;

    Human.population+=1;
  }
}
