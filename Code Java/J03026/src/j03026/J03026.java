
import java.util.Scanner;

public class J03026 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            String a = in.next();
            String b = in.next();
            if(a.equals(b)) System.out.println("-1");
            else System.out.println(Math.max(a.length(), b.length()));
        }
    }
    
}
