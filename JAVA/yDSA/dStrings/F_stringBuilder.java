package yDSA.dStrings;

public class F_stringBuilder {
  public static void main(String[] args) {
    StringBuilder builder = new StringBuilder();
    for (int i = 0; i < 26; i++) {
      char ch = (char) ('a' + i);
      builder.append(ch);
    }
    System.out.println(builder.toString());
  }
}
