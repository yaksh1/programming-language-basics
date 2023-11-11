import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Practice {
  public static void main(String[] args) {
      boolean[][] board = {
        {true,true,true},
        {true,true,true},
        {true,true,true}
      };
      int[][] path = new int[board.length][board[0].length];
      System.out.println(maze("",board,0,0,path,1));
    }
    
    static ArrayList<String> maze(String p,boolean[][] maze,int r,int c,int[][] path,int step) {
      if (r == maze.length - 1 && c == maze[0].length - 1) {
        path[r][c] = step;
          ArrayList<String> list = new ArrayList<>();
          for (int[] arr : path) {
            System.out.println(Arrays.toString(arr));
          }
          System.out.println();
          list.add(p);
          return list;
        }
        ArrayList<String> list = new ArrayList<>();

        if (!maze[r][c]) {
          return list;
        }
        maze[r][c] = false;
        path[r][c] = step;

        if (r < maze.length-1) {
          list.addAll(maze(p+"D",maze, r + 1, c,path,step+1));
        }
        if (c < maze[0].length - 1) {
          list.addAll(maze(p + "R", maze, r, c + 1, path, step + 1));
        }
        if (c > 0) {
          list.addAll(maze(p + "L", maze, r, c - 1, path, step + 1));
        }
        if (r > 0) {
          list.addAll(maze(p + "U", maze, r - 1, c, path, step + 1));
        }
        
        maze[r][c] = true;
        path[r][c] = 0;
        return list;
    }
}
