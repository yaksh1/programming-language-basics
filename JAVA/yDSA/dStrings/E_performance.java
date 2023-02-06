package yDSA.dStrings;


public class E_performance {
  public static void main(String[] args) {
    
    //add all alphabets to a string
    String series = "";
    for(int i = 0;i<26;i++)
    {
      char ch = (char) ('a' + i);      //! BAD PERFORMANCE SOLUTION (use string builder instead)
      series += ch;
    }
    System.out.println(series);
  }
}
