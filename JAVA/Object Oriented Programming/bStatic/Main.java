package bStatic;


public class Main {
  public static void main(String[] args) {
    
    Human yaksh = new Human(19, "male", true);
    Human raghav = new Human(20, "male", false);

    // System.out.println(yaksh.population); //* this will work but dont use this */
    // System.out.println(raghav.population);

    System.out.println(Human.population);

    }
}