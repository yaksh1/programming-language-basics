package aConcepts;


import java.util.*;


// create a data type to hold name,roll,marks of students
public class Main {
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      Student s1 = new Student(); // creating an object of student
      // s1.name = "yaksh";
      // s1.rno = 3;
      // s1.marks = 69.0f;

      // System.out.println(s1.rno);  //* 3 */
      // System.out.println(s1.name); //* yaksh */
      // System.out.println(s1.marks); //* 69.0 */

      // greeting function
      s1.greeting(); //* hello i am yaksh */

      //changing the name then calling the greeting function
      s1.changeName("dumbass"); //* yaksh -> dumbass */
      s1.greeting(); //* hello i am dumbass */

      // new student using parameters constructor
      Student s2 = new Student(10, "rahul", 90.0f);
      System.out.println(s2.rno); //* 10 */
      System.out.println(s2.name); //* rahul */
      System.out.println(s2.marks); //* 90.0 */

      // ------------ store details of 3 students --------------------
      List<Student> lists = new ArrayList<>();

      //input
      for (int i = 0; i < 3; i++) {
        Student s = new Student(in.nextInt(), in.next(), in.nextFloat());
        lists.add(s);
      }
      
      // display
      for (int i = 0; i < 3; i++) {
        lists.get(i).display();
      }
    }

  }

}

//create a class
class Student {
  int rno;
  String name;
  float marks;

  //we can have other functions under class
  void greeting() {
    System.out.println("hello i am " + this.name);
  }

  void changeName(String newName) {
    this.name = newName;
  }


  // creating constructor
  // "this" is a keyword to access every object
  Student() {
    this.name = "yaksh";
    this.rno = 3;
    this.marks = 69.0f;
  }

  Student(int rno, String name, float marks) {
    this.rno = rno;
    this.name = name;
    this.marks = marks;
  }

  //display function
  public void display() {
    System.out.println(this.name + " " + this.rno + " " + this.marks);
  }
}



