package yzDataStructures.Queue;

public class CustomQueue {
  protected int[] data;
  private static final int DEFAULT_SIZE = 10;
  protected int end = 0;
  
  public CustomQueue() {
    this(DEFAULT_SIZE);
  }
  
  public CustomQueue(int size) {
    this.data = new int[size];
  }

  public boolean isFull() {
    return end == data.length;
  }
  
  public boolean isEmpty() {
    return (end == 0);
  }
  
  public boolean insert(int item) throws Exception {
    if (isFull()) {
      throw new Exception("Queue is full");
    }
    data[end] = item;
    end++;
    return true;
  }

  public int remove() throws Exception {
    if (isEmpty()) {
      throw new Exception("Queue is empty");
    }
    int temp = data[0];
    for (int i = 1; i < end; i++) {
      data[i - 1] = data[i];
    }
    end--;
    return temp;
  }

  public void display() {
    if (end == 0) {
      System.out.println("Queue is empty.");
    }
    for (int i = 0; i < end; i++) {
      System.out.print(data[i] + " <- ");
    }
    System.out.println("END");
  }
}
