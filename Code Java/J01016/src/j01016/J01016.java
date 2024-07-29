
import java.util.Scanner;

public class J01016 {
    public static boolean check(String s){
        int n = s.length();
        int dem = 0;
        for(int i = 0; i < n; i++){
            if(s.charAt(i) == '4' || s.charAt(i) == '7') dem++;
        }
        return dem == 4 || dem == 7;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        if(check(s)){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
    
}
