import java.util.Scanner;

public class J01010 {
    public static Scanner in = new Scanner(System.in);
    public static void main(String[] args) {
        int t = in.nextInt();
        while(t-->0){
            String s = in.next();
            long n = solve(s);
            if(n == 0) System.out.println("INVALID");
            else System.out.println(n);
        }
    }
    public static long solve(String s){
        int k = s.length();
        long n = 0;
        for(int i = 0; i < k; i++){
            char c = s.charAt(i);
            switch(c){
                case '0':
                    n = n * 10;
                    continue;
                case  '8':
                    n = n * 10;
                    continue;
                case '9':
                    n = n * 10;
                    continue;
                case '1':
                    n = n * 10 + 1;
                    continue;
                default:
                    return 0;
            }
        }
        return n;
    }
}
