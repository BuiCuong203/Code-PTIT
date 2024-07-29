package j05008;

import java.io.IOException;
import static java.lang.Math.abs;
import java.util.ArrayList;
import java.util.Scanner;

public class J05008 {

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-->0){
            int n = sc.nextInt();
            ArrayList<Point> a = new ArrayList<>();
            while(n-->0){
                int x = sc.nextInt(), y = sc.nextInt();
                a.add(new Point(x, y));
            }
            double res = 0;
            for(int i = 0; i < a.size(); i++){
                if(i != a.size() - 1){
                    res += a.get(i).change(a.get(i + 1));
                }
                else{
                    res += a.get(i).change(a.get(0));
                }
            }
            System.out.printf("%.3f\n", abs(res / 2));
        }
    }
    
}
