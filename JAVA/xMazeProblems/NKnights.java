public class NKnights {
  public static void main(String[] args) {
    int n = 4;
    boolean[][] board = new boolean[n][n];

    System.out.println(knight(board, 0,0,2));   
  }

  static int knight(boolean[][] board, int r,int c,int target) {
    if (target == 0) {
      display(board);
      System.out.println();
      return 1;
    }

    int count = 0;

    if (r == board.length - 1 && c == board.length) {
      return 0;
    }

    if (c == board.length) {
      count+=knight(board, r + 1, 0, target);
      return count;
    }

    if (isSafe(board, r, c)) {
      board[r][c] = true;
      count += knight(board, r, c + 1, target - 1);
      board[r][c] = false;
    }
    
    count+=knight(board, r, c + 1, target);

    return count;
  }

  static boolean isSafe(boolean[][] board, int r, int c) {
    if (isValid(board, r - 2, c + 1)) {
      if (board[r - 2][c + 1]) {
        return false;
      }
    }
    if (isValid(board, r - 2, c - 1)) {
      
      if (board[r - 2][c - 1]) {
        return false;
      }
    }
    if (isValid(board, r - 1, c + 2)) {
      
      if (board[r - 1][c + 2]) {
        return false;
      }
    }
    if (isValid(board, r - 1, c - 2)) {
      
      if (board[r - 1][c - 2]) {
        return false;
      }
    }
    return true;
  }

  static boolean isValid(boolean[][] board, int r, int c) {
    if (r >= 0 && r < board.length && c >= 0 && c < board.length) {
      return true;
    }
    return  false;
  }

  static void display(boolean[][] board) {
    for (int i = 0; i < board.length; i++) {
      for (int j = 0; j < board.length; j++) {
        if (board[i][j]) {
          System.out.print("K ");
        } else {
          System.out.print("0 ");
        }
      }
      System.out.println();
    }
  }
}
