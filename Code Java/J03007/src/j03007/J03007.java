
import java.util.Scanner;

public class J03007 {
    public static boolean check(String s){
        int l = s.length();
        if(s.charAt(0) != '8') return false;
        int tong = 0;
        for(int i = 0; i < l; i++){
            tong += (s.charAt(i) - '0');
        }
        for(int i = 0; i < l/ 2; i++){
            if(s.charAt(i) != s.charAt(l - 1 - i) || tong % 10 != 0){
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
