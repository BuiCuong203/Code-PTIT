
import java.util.Scanner;

public class J01014 {
    public static Scanner in = new Scanner(System.in);
    public static boolean snt(long n){
        if(n < 2) return false;
        for(int i = 2; i <= Math.sqrt(n); i++){
            if(n % i == 0) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        int t = in.nextInt();
        while(t-->0){
            long n = in.nextLong();
            int res = 0;
            boolean check = true;
            for(int i = 1;i <= Math.sqrt(n); i++){
                if(n % i == 0){
                    if(snt(n / i)){
                        System.out.println(n / i);
                        check = false;
                        break;
                    }
                    if(snt(i)) res = i;
                }
            }
            if(check == true){
                System.out.println(res);
            }
        }
    }
    
}
