package xMazeProblems;

import java.util.ArrayList;

public class backTracking {
  public static void main(String[] args) {
    boolean[][] board = {
        { true, true, true },
        { true, true, true },
        { true, true, true }
    };

    System.out.println(allPath("", board, 0, 0));
  }
  
  static ArrayList<String> allPath(String p,boolean[][] maze,int r,int c){
    if (r == maze.length-1 && c == maze[0].length-1) {
      ArrayList<String> list = new ArrayList<>();
      list.add(p);
      return list;
    }

    ArrayList<String> list = new ArrayList<>();

    // if already visited return
    if (!maze[r][c]) {
      return list;
    }

    // mark visited
    maze[r][c] = false;

    if (r < maze.length-1) {
      list.addAll(allPath(p + "D", maze, r + 1, c));//down
    }
    if (r > 0) {
      list.addAll(allPath(p + "U", maze, r - 1, c));//up
    }
    if (c < maze[0].length-1) {
      list.addAll(allPath(p + "R", maze, r , c+1));//right
    }
    if (c > 0) {
      list.addAll(allPath(p + "L", maze, r, c - 1));//left
    }
    
    // this is where function gets over
    // so undo the changes made to the maze before function ends
    maze[r][c] = true;
    
    return list;
  }
}
