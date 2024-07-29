package b5;

import java.util.Scanner;
import java.util.Stack;

public class B5 {

    public static int tinhtoan(String x, int a, int b){
        if(x.equals("+")) return a + b;
        if(x.equals("-")) return a - b;
        if(x.equals("*")) return a * b;
        return a / b;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            Stack<Integer> st = new Stack<>();
            for(int i = 0; i < n; i++){
                String x = sc.next();
                if(x.equals("+") || x.equals("-") || x.equals("*") || x.equals("/")){
                    int a = (int) st.peek();
                    st.pop();
                    int b = (int) st.peek();
                    st.pop();
                    st.push(tinhtoan(x, a, b));
                }
                else{
                    st.push(x);
                }
            }
        }
    }
    
}
