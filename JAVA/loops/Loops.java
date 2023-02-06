package loops;

import java.util.Scanner;

public class Loops {
  //print numbers 1 to n
  public static void main(String[] args) {
    try (Scanner in = new Scanner(System.in)) {
      int n = in.nextInt();

      //FOR loop
      /*
       * syntax:
       * 
       *    for(initialization ; condition ; increment/decrement){
       *        //body
       *     }
       */
      for (int i = 1; i <= n; i++) {
        System.out.println(i);
      }

      /*
        WHILE LOOP
      
        syntax:
      
            while(condition){
              //body
            }
      
       */
      int i=0;
      while (i < n) {
        System.out.println("chutiya");
        i++;
      }

      /*
       * DO WHILE LOOP
       * 
       * syntax:
       * 
       *      do{
       *        //body
       *    }while(condition)
       * 
       */
      
      i = 0;
      do{
        System.out.println("hello");
        i++;
      } while (i < n);
    }
  }
}
