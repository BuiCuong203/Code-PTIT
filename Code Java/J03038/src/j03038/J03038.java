
import java.util.Scanner;

public class J03038 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        System.out.println(s.chars().distinct().count());
    }
    
}
