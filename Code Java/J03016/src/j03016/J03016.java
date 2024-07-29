
import java.math.BigInteger;
import java.util.Scanner;

public class J03016 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            BigInteger n = in.nextBigInteger();
            if(n.mod(new BigInteger("11")).toString().equals("0")){
                System.out.println("1");
            }
            else{
                System.out.println("0");
            }
        }
    }
    
}
