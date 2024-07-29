
import java.util.Scanner;

public class J01025 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x1 = in.nextInt();
        int y1 = in.nextInt();
        int x2 = in.nextInt();
        int y2 = in.nextInt();
        int x3 = in.nextInt();
        int y3 = in.nextInt();
        int x4 = in.nextInt();
        int y4 = in.nextInt();
        int ngang = Math.max(Math.max(x1, x2),Math.max(x3, x4)) - Math.min(Math.min(x1, x2),Math.min(x3, x4));
        int doc = Math.max(Math.max(y1, y2),Math.max(y3, y4)) - Math.min(Math.min(y1, y2),Math.min(y3, y4));
        int a = Math.max(ngang, doc);
        System.out.println(a*a);
    }
    
}
