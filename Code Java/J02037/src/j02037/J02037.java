
import java.util.Scanner;

public class J02037 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        in.nextLine();
        while(t-->0){
            String s = in.nextLine();
            String[] a = s.split("\\s+");
            int l = a.length, chan = 0, le = 0;
            for(int i = 0; i < l; i++){
                if(a[i].charAt(a[i].length() - 1) % 2 == 0) chan++;
                else le++;
            }
            if((l % 2 == 0 && chan > le) || (l % 2 == 1 && chan < le)){
                System.out.println("YES");
            }
            else System.out.println("NO");
        }
    }
    
}
