package yDSA.ePatterns;


/*
1.  *****
    *****
    *****
    *****
    ***** 
*/
public class a {
  public static void main(String[] args) {
    //run the outer loop till number of rows
    for(int i=0;i<5;i++){
      //for every row,run the col
      for (int j = 0; j < 5; j++) {
        System.out.print("*");
      }
      //when one row is printed , print a new line
      System.out.println();
    }
  }
}
