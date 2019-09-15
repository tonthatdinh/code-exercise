import java.util.LinkedList;
import java.util.Queue;

public class QueueExample {
    public static void main(String[] args){
        Queue<Integer> queue = new LinkedList<>();

        for(int i = 0; i < 5; i ++)
            queue.add(i);

        System.out.print(queue);



    }
}
