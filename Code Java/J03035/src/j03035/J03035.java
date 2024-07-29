
import java.util.Scanner;

public class J03035 {
    
    public static long cnt(int index, String a){
        long res = 1;
        for(int i = index; i < a.length(); i++){
            if(a.charAt(i) == '?') res *= 10;
        }
        return res;
    }
    
    public static long solve(String a, String b){
        long res = 0;
        for(int i = 0; i < a.length(); i++){
            char x = a.charAt(i);
            char y = b.charAt(i);
            if(x != y){
                if(x == '?') res += ('9' - y) * cnt(i + 1, a);
                else{
                    if(x > y) return res + cnt(i + 1, a);
                    else if(x < y)return res;
                }
            }
        }
        return res;
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        in.nextLine();
        while(t-->0){
            String a = in.nextLine();
            String b = in.nextLine();
            System.out.println(solve(a, b));
        }
    }
}
