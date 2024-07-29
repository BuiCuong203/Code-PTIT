
import java.util.Scanner;

public class J03040 {
    public static boolean check1(int[] a){
        for(int i = 0; i < 4; i++){
            if(a[i] >= a[i + 1]) return false;
        }
        return true;
    }
    public static boolean check2(int[] a){
        for(int i = 0; i < 5; i++){
            if(a[i] != 6 && a[i] != 8) return false;
        }
        return true;
    }
    public static boolean check3(int[] a){
        if(a[0] != a[1] || a[0] != a[2] || a[3] != a[4]) return false;
        return true;
    }
    public static boolean check(int[] a){
        if(check1(a) || check2(a) || check3(a)) return true;
        return false;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            String s = in.next();
            int[] a = new int[5];
            a[0] = s.charAt(5) - '0';
            a[1] = s.charAt(6) - '0';
            a[2] = s.charAt(7) - '0';
            a[3] = s.charAt(9) - '0';
            a[4] = s.charAt(10) - '0';
            if(check(a)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
    
}
