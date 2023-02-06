package yDSA.aLinearSearch;

public class Str {
  public static void main(String[] args) {
    String str = "yaksh";
    char ch = 'x';
    System.out.println(find(str,ch));
  }
  
  static boolean find(String str, char target) {
    if (str.length() == 0)
      return false;

    for (char element : str.toCharArray()) {
      if (element == target) {
        return true;
      }
    }
    return false;
  }
}
