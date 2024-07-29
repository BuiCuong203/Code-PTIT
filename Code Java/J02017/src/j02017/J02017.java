
import java.util.ArrayList;
import java.util.Scanner;

public class J02017 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        ArrayList<Integer> a = new ArrayList<>(n);
        for(int i = 0; i < n; i++){
            a.add(in.nextInt());
        }
        while (true) {
            boolean check = true;
            for (int i = 0; i < a.size() - 1; i++) {
                if ((a.get(i) + a.get(i + 1)) % 2 == 0) {
                    a.remove(i + 1);
                    a.remove(i);
                    i--;
                    check = false;
                }
            }
            if (check) {
                System.out.println(a.size());
                return;
            }
        }
    }
    
}
