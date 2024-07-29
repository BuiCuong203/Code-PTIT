
import java.util.Scanner;

public class J03024 {
    public static String check(String s){
        if(s.charAt(0) == '0') return "INVALID";
        int chan = 0, le = 0;
        for(int i = 0; i < s.length(); i++){
            if(!Character.isDigit(s.charAt(i))){
                return "INVALID";
            }
            if((s.charAt(i) - '0') % 2 == 0) chan++;
            else le++;
        }
        if((s.length() % 2 == 0 && chan > le) || (s.length() % 2 != 0 && chan < le)){
            return "YES";
        }
        return "NO";
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            String s = in.next();
            System.out.println(check(s));
        }
    }
    
}
