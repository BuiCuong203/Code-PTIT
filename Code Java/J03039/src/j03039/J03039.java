
import java.math.BigInteger;
import java.util.Scanner;

public class J03039 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            BigInteger a = new BigInteger(in.next());
            BigInteger b = new BigInteger(in.next());
            if(a.mod(b).toString().equals("0") || b.mod(a).toString().equals("0")){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
    
}
