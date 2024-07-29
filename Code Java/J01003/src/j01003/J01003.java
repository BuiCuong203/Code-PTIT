
import java.util.Scanner;


public class J01003 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        float a = in.nextFloat();
        float b = in.nextFloat();
        if(a == 0f){
            if(b == 0f){
                System.out.println("VSN");
            }
            else{
                System.out.println("VN");
            }
        }
        else{
            System.out.printf("%.2f", -b/a);
        }
        System.out.println();
    }
}
