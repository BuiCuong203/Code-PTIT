
import java.util.Scanner;

public class J03006 {
    public static boolean check(String s){
        for(int i = 0; i < s.length() / 2; i++){
            if((s.charAt(i) - '0') % 2 != 0 || s.charAt(i) != s.charAt(s.length() - 1 - i)){
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
