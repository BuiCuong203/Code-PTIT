
import java.util.Scanner;

public class J03017 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            String s = in.next();
            int l = s.length();
            while(true){
                boolean check = true;
                for(int i = 0; i < s.length() - 2; i++){
                    if(s.charAt(i) == '1' && s.charAt(i + 1) == '0' && s.charAt(i + 2) == '0'){
                        s = s.substring(0, i) + s.substring(i + 3);
                        check = false;
                    }
                }
                if(check) break;
            }
            System.out.println(l - s.length());
        }
    }
    
}
