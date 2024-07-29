
import java.util.Scanner;

public class J01024 {
    public static boolean check(String s){
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) != '0' && s.charAt(i) != '1' && s.charAt(i) != '2') return false;
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
            else System.out.println("NO");
        }
    }
    
}
