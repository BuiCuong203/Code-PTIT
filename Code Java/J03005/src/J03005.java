
import java.util.Scanner;

public class J03005 {
    public static void chuanhoa(String s){
      String[] a = s.split("\\s+");
      for(int i = 1; i < a.length; i++){
          System.out.print(a[i].substring(0,1).toUpperCase() + a[i].substring(1).toLowerCase());
          if(i != a.length - 1) System.out.print(" ");
      }
        System.out.println(", " + a[0].substring(0).toUpperCase());
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        in.nextLine();
        while(t-->0){
            String s = in.nextLine().trim();
            chuanhoa(s);
        }
    }
    
}
