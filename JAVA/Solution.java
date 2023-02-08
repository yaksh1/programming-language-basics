

public class Solution {

    static int a = 10;
    static int b;

    static {
        System.out.println("I am in block");
        b = a + 10;
    }

    public static void main(String[] args) {
        
        System.out.println(a);
        System.out.println(b);

        b += 10;
        System.out.println(b);
    }
}
