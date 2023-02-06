package zQuestions.arrays;

import java.util.ArrayList;
import java.util.Arrays;

public class reshape {
  public static void main(String[] args) {
    int[][] mat = { { 1, 2 }, { 3, 4 } };

    // System.out.println(Arrays.toString(find(mat, 1, 4)));
    find(mat, 1, 4);
  }

  static void find(int[][] mat, int r, int c) {
    int rlen = mat.length;
    int clen = mat[0].length;
    // if (r != 1 && c != rlen * clen) {
    //   return mat;
    // }
    ArrayList<ArrayList<Integer>> list = new ArrayList<>();
    for (int i = 0; i < 1; i++) {
      list.add(new ArrayList<>());
    }
    for (int i = 0; i < mat.length; i++) {
      for (int j = 0; j < mat[i].length; j++) {
        list.get(0).add(mat[i][j]);
      }
    }
    int[][] reshape = new int[1][rlen * clen];
    for (int i = 0; i < list.size(); i++) {
      reshape[0][i] = list.get(0).get(i);
    }
    System.out.println(Arrays.toString(reshape));  
  }
}
