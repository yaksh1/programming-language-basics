package yzDataStructures.Queue;

public class QueueMain {
  public static void main(String[] args) throws Exception {
    CustomQueue q = new CustomQueue();
    q.insert(10);
        q.insert(1);
    q.insert(12);
    q.insert(104);
    q.insert(105);
    q.insert(10);
        q.insert(1);
    q.insert(12);
    q.insert(104);
    q.insert(105);


    q.display();
    System.out.println(q.remove());
    q.display();

  }
}
