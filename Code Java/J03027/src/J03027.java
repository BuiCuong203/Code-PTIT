
import java.util.Scanner;

public class J03027 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        while(true){
            boolean check = true;
            for(int i = 0; i < s.length() - 1; i++){
                if(s.charAt(i) == s.charAt(i + 1)){
                    s = s.substring(0, i) + s.substring(i + 2);
                    check = false;
                }
            }
            if(s.isEmpty() && check == true){
                System.out.println("Empty String");
                break;
            }
            if(!s.isEmpty() && check == true){
                System.out.println(s);
                break;
            }
        }
    }
    
}
