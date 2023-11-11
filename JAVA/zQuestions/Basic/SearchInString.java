package zQuestions.Basic;

public class SearchInString {
  public static void main(String[] args) {
    String str = "Hello World";
    char target = 'e';
    System.out.println(find(str,target));
  }

  static int find(String str, char target) {
    if (str.length() == 0) {
      return -1;
    }
    for (int i = 0; i < str.length(); i++) {
      if ((str.charAt(i)) == target) {
        return i;
      }
    }
    return -1;
  }
}
