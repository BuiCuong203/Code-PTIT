
import java.util.Scanner;

public class J01001 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int h = in.nextInt();
        int w = in.nextInt();
        if(h <= 0 || w <= 0){
            System.out.println(0);
        }
        else{
            System.out.println(2*(h+w) + " " + h*w);
        }
    }
}
