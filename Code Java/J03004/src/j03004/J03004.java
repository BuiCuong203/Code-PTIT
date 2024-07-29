
import java.util.ArrayList;
import java.util.Scanner;

public class J03004 {
    public static void chuanhoa(String s){
        String tmp = "";
        String[] a = s.split("\\s+");
        for(int i = 0; i < a.length; i++){
            tmp += a[i].toUpperCase().charAt(0);
            for(int j = 1; j < a[i].length(); j++){
                tmp += a[i].toLowerCase().charAt(j);
            }
            if(i != a.length - 1) tmp += " ";
        }
        System.out.println(tmp);
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t= in.nextInt();
        in.nextLine();
        while(t-->0){
            String s = in.nextLine().trim();
            chuanhoa(s);
        }
    }
    
}
