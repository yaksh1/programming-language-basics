package yDSA.dStrings;

public class G_palindrome {
  public static void main(String[] args) {
    String a = "abba";
    System.out.println(m1(a));
    System.out.println(m2(a));
  }

  static boolean m1(String a) {
    if(a==null || a.length()==0) return true;
    a = a.toLowerCase();
    StringBuilder reverse = new StringBuilder();
    for (int i = 0; i < a.length(); i++) {
      reverse.append(a.charAt(a.length() - i - 1));
    }
    return a.equals(reverse.toString());
  }

  static boolean m2(String a) {
    if(a==null || a.length()==0) return true;
    a = a.toLowerCase();
    int start = 0, end = a.length()-1;
    while (start <= end) {
      if (a.charAt(end) == a.charAt(start)) {
        start++;
        end--;
      } else {
        return false;
      }
    }
    return true;
  }
}
