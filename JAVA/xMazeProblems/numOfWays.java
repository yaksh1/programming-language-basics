package xMazeProblems;

import java.util.ArrayList;

public class numOfWays {
  public static void main(String[] args) {
    // System.out.println(ans(3, 3));
    // path("", 3, 3);
    // System.out.println(pathRet("", 3, 3));
    System.out.println(pathDia("", 3, 3));
  }

  // return number of paths possible
  static int ans(int r, int c) {
    // when mouse reaches either end of matrix
    if (r == 1 || c == 1) {
      return 1;
    }

    // either goes down or goes right
    int left = ans(r - 1, c);
    int right = ans(r, c - 1);

    return left + right;
  }
  
  // print the possible paths to reach end
  static void path(String p, int r, int c) {
    if (r == 1 && c == 1) {
      System.out.println(p);
      return;
    }
    // when goes down add D
    if (r > 1) {
      path(p + "D", r - 1, c);
    }
    // when goes right add R
    if (c > 1) {
      path(p + "R", r, c - 1);
    }
  }

  static ArrayList<String> pathRet(String p, int r, int c) {
    if (r == 1 && c == 1) {
      ArrayList<String> list = new ArrayList<>();
      list.add(p);
      return list;
    }

    ArrayList<String> list = new ArrayList<>();

    if (r > 1) {
      list.addAll(pathRet(p + "D", r - 1, c));
    }
    if (c > 1) {
      list.addAll(pathRet(p + "R", r, c - 1));
    }

    return list;
  }

  // now diagonal is also included
  static ArrayList<String> pathDia(String p,int r,int c){
    if (r == 1 && c == 1) {
      ArrayList<String> list = new ArrayList<>();
      list.add(p);
      return list;
    }

    ArrayList<String> list = new ArrayList<>();

    if (r > 1) {
      list.addAll(pathDia(p + "D", r - 1, c));// down
    }
    if (c > 1) {
      list.addAll(pathDia(p + "R", r, c - 1));//right
    }
    if (r > 1 && c > 1) {
      list.addAll(pathDia(p + "c", r - 1, c - 1));//cross
    }

    return list;
  }
}
