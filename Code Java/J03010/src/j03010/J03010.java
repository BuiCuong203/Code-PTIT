
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class J03010 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        ArrayList<String> a = new ArrayList<>();
        in.nextLine();
        while(t-->0){
            String[] s = in.nextLine().trim().toLowerCase().split("\\s+");
            String tmp = s[s.length - 1];
            for(int i = 0; i < s.length - 1; i++){
                tmp += s[i].charAt(0);
            }
            a.add(tmp);
            int cnt = Collections.frequency(a, tmp);
            if(cnt == 1) tmp += "@ptit.edu.vn";
            else tmp += cnt + "@ptit.edu.vn";
            System.out.println(tmp);
        }
    }
    
}
