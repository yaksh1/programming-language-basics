package zQuestions.arrays;
//There are n kids with candies. You are given an integer array candies, 
//where each candies[i] represents the number of candies the ith kid has, 
//and an integer extraCandies, denoting the number of extra candies that you have.
//*Return a boolean array result of length n, where result[i] is true if, 
//*after giving the ith kid all the extraCandies, 
//*they will have the greatest number of candies among all the kids, or false otherwise. */

// import java.util.Arrays;
import java.util.List;
import java.util.ArrayList;

public class Candies {
  public static void main(String[] args) {
    int[] candies= {1,4,7,2,9,10,4};
    int extraCandies = 5;
    List<Boolean> ans = new ArrayList<Boolean>();
    ans = kidsWithCandies(candies, extraCandies);
    System.out.println(ans);
  }

  public static List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
    
    List<Boolean> result = new ArrayList<Boolean>();
    int max = Integer.MIN_VALUE;
    for (int i = 0; i < candies.length; i++) {
      if (candies[i] > max) {
        max = candies[i];
      }
    }
    int sum = 0;
    for (int i = 0; i < candies.length; i++) {
      sum = candies[i] + extraCandies;
      if (sum > max) {
        result.add(true);
      } else {
        result.add(false);
      }
    }
    return result;
    }
  }

