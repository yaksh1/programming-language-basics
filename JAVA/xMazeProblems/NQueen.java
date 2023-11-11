public class NQueen {
  public static void main(String[] args) {

    int n = 4;
    boolean[][] board = new boolean[n][n];

    System.out.println(queens(board, 0));
  }

  static int queens(boolean[][] board, int r) {
    if (r == board.length) {
      display(board);
      System.out.println();
      return 1;
    }

    int count = 0;

    // placing queen and checking for every row
    for (int c = 0; c < board.length; c++) {
      if (isSafe(board, r, c)) {
        board[r][c] = true;
        count += queens(board, r + 1); // recursive call with next row 
        board[r][c] = false; // backtrack
      }
    }
    return count;
  }

  static boolean isSafe(boolean[][] board, int r, int c) {
    // vertical check
    for (int i = 0; i < r; i++) {
      if (board[i][c]) {
        return false;
      }
    }

    // diagonal left
    int maxLeft = Math.min(r, c);
    for (int i = 1; i <= maxLeft; i++) {
      if (board[r - i][c - i]) {
        return false;
      }
    }

    //diagonal right
    int maxRight = Math.min(r, board.length - c - 1);
    for (int i = 1; i <= maxRight; i++) {
      if (board[r - i][c + i]) {
        return false;
      }
    }
    return true;
  }

  static void display(boolean[][] board){
    for (int i = 0; i < board.length; i++) {
      for (int j = 0; j < board.length; j++) {
        if (board[i][j]) {
          System.out.print("Q ");
        } else {
          System.out.print("X ");
        }
      }
      System.out.println();
    }
  }
}
