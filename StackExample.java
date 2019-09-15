import java.util.Stack;

public class StackExample {
    public static void main(String[] args){
        Stack<Integer> stack = new Stack<Integer>();
        stack.push(3);
        stack.push(4);
        stack.search(3);
        System.out.println("Element on stack top:" + stack.peek());

        stack.pop();
        System.out.println("Element on stack top:" + stack.peek());

    }
}
