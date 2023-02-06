package zQuestions.arrays;


public class chips {
  public static void main(String[] args) {
    int[] position = { 2, 2, 2, 3, 3 };
    System.out.println(find(position));
  }

  public static int find(int[] position) {
    int[] ans = new int[2];
    int countEve = 1;
    int countOdd = 1;
    for (int i = 0; i < position.length; i++) {
      if (position[i] % 2 == 0) {
        ans[0] = countEve;
        countEve++;
      } else {
        ans[1] = countOdd;
        countOdd++;
      }
    }
    return Math.min(ans[0],ans[1]);
  }

}
