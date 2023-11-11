package xMazeProblems;

import java.util.ArrayList;
import java.util.Arrays;

public class printPath {
  
  public static void main(String[] args) {
    boolean[][] board = {
        { true, true, true },
        { true, true, true },
        { true, true, true }
    };

    int[][] path = new int[board.length][board[0].length];

    Path("", board, 0, 0,path,1);
  }

  static void Path(String p, boolean[][] maze, int r, int c,int[][] path,int step) {
    if (r == maze.length - 1 && c == maze[0].length - 1) {
      path[r][c]=step;
      for (int[] arr : path) {
        System.out.println(Arrays.toString(arr));
      }
      System.out.println(p);
      System.out.println();
      return;
    }

    // if already visited return
    if (!maze[r][c]) {
      return;
    }

    // mark visited
    maze[r][c] = false;
    //mark steps in pat matrix
    path[r][c] = step;

    if (r < maze.length - 1) {
      Path(p + "D", maze, r + 1, c,path,step+1);// down
    }
    if (r > 0){
      Path(p + "U", maze, r - 1, c,path,step+1);// up
    }
    if (c < maze[0].length - 1) {
      Path(p + "R", maze, r, c + 1,path,step+1);// right
    }
    if (c > 0) {
      Path(p + "L", maze, r, c - 1,path,step+1);// left
    }

    // this is where function gets over
    // so undo the changes made to the maze before function ends
    maze[r][c] = true;
    path[r][c] = 0;

    
    return;
  }
}
