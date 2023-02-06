package zQuestions.arrays;


public class MaxWealth {
  public static void main(String[] args) {
    int[][] accounts = { { 1, 2, 3 }, { 3, 2, 1 } };

    int ans = maximumWealth(accounts);
    System.out.println(ans);
  }

  static int maximumWealth(int[][] accounts) {
    int max = Integer.MIN_VALUE;
    for (int i = 0; i < accounts.length; i++) {
      int sum = 0;
      for (int j = 0; j < accounts[i].length; j++) {
        sum += accounts[i][j];
        if (sum > max) {
          max = sum;
        }
      }
    }
    return max; 
  }

}
