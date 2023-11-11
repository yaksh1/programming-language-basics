package xMazeProblems;

import java.util.ArrayList;

//! when you land on new cell check if its obstacle or not

//! if you land on river stop the recursion call

public class mazeWithObstacle {
  public static void main(String[] args) {
    boolean[][] board ={
      {true,true,true},
      {true,false,true},
      {true,true,true}
    };

    System.out.println(path("",board,0,0));
  }

  static ArrayList<String> path(String p,boolean[][] maze, int r, int c) {
    if (r == maze.length - 1 && c == maze[0].length - 1) {
      ArrayList<String> list = new ArrayList<>();
      list.add(p);
      return list;
    }

    ArrayList<String> list = new ArrayList<>();

    if (!maze[r][c]) {
      return list;
    }

    if (r < maze.length-1) {
      list.addAll(path(p + "D", maze, r + 1, c));// down
    }
    
    if (c < maze[0].length-1) {
      list.addAll(path(p + "R",maze, r, c + 1));// right
    }

    return list;
  }
}
