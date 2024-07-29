
import java.util.Scanner;

public class J03008 {
    public static boolean snt(int n){
        if(n < 2) return false;
        for(int i = 2; i <= Math.sqrt(n); i++){
            if(n % i == 0) return false;
        }
        return true;
    }
    public static boolean check(String s){
        int l = s.length();
        for(int i = 0; i < l / 2; i++){
            if(!snt(s.charAt(i) - '0') || s.charAt(i) != s.charAt(l - 1 - i)){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            String s = in.next();
            if(check(s)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
    
}
