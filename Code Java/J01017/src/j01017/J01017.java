
import java.util.Scanner;

public class J01017 {
    public static boolean check(String s){
        int n = s.length();
        for(int i = 0; i < n-1; i++){
            int a = s.charAt(i) - '0';
            int b = s.charAt(i+1) - '0';
            if(Math.abs(a - b) != 1) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            String s = in.next();
            if(check(s)){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
    
}
