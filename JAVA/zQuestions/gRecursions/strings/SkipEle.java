

public class SkipEle {
  public static void main(String[] args) {
    //by returning string 
    String ans = skipReturningString("baacdacf");
    System.out.println(ans);
    // passing answer string as a parameter
    skipVoid("", "baacdacf");

    //skipping string
    skipWord("","bcapplezgh");

  }

  // Skip a character and return it
  static String skipReturningString(String up) {
    if (up.isEmpty()) {
      return "";
    }

    char ch = up.charAt(0);

    if (ch == 'a') {
      return skipReturningString(up.substring(1));
    } else {
      return ch + skipReturningString(up.substring(1));
    }
  }

  // skip a character and print
  static void skipVoid(String p, String up) {
    if (up.isEmpty()) {
      System.out.println(p);
      return;
    }

    char ch = up.charAt(0);

    if (ch == 'a') {
      skipVoid(p, up.substring(1));
    } else {
      skipVoid(p + ch, up.substring(1));
    }
  }
  
  // skip an entire string
  static void skipWord(String p, String up) {
    if (up.isEmpty()) {
      System.out.println(p);
      return;
    }

    if (up.startsWith("apple" )) {
      skipWord(p, up.substring(5));
    } else {
      skipWord(p + up.charAt(0), up.substring(1));
    }
  }

}

  