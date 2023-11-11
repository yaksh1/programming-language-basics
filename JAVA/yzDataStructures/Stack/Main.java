package yzDataStructures.Stack;

public class Main {
  public static void main(String[] args) throws StackException{
    CustomStack stack = new CustomStack();
    stack.push(2);
    stack.push(4);
    stack.push(6);
    System.out.println(stack.pop());
    System.out.println(stack.pop());
    System.out.println(stack.peek());
    System.out.println(stack.pop());
    System.out.println(stack.pop());

  }
}
