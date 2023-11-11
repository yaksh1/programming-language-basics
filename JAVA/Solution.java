import java.util.*;

class Solution {
    public static void main(String[] args) {
        System.out.println(minInsertions("(()))"));
    }
    public static int minInsertions(String s) {
        
        Stack<Character> stack = new Stack<>();
        int count=0;
        for(int i = 0;i<s.length();i++){
            if(s.charAt(i) == '('){
                stack.push(s.charAt(i));
            }else{
                if(s.charAt(i)==')'){
                    if(i+1<s.length()&&s.charAt(i+1)==')'){
                        i++;
                        if(stack.isEmpty()||stack.pop()!='('){
                        count++;
                        }
                    }else{
                    count++;

                    }
                }   
            }
        } 
            
        return stack.size()+count;
    }
}

