import java.util.ArrayList;

// ===================================================
// get ascii value in subset ab = a,b,ab,97,98
//====================================================
public class ASCII {
  public static void main(String[] args) {
    System.out.println(ascii("","ab"));
  }
  
  static ArrayList<String> ascii(String p, String up) {
    ArrayList<String> left = new ArrayList<>();
    ArrayList<String> right = new ArrayList<>();
    ArrayList<String> middle = new ArrayList<>();

    if (up.isEmpty()) {
    ArrayList<String> list = new ArrayList<>();
    list.add(p);
    return list;
    }

    char ch = up.charAt(0);

    left = ascii(p + ch, up.substring(1));
    right = ascii(p, up.substring(1));
    middle = ascii(p + (ch + 0), up.substring(1));

    left.addAll(middle);
    left.addAll(right);

    return left;
  }
}
