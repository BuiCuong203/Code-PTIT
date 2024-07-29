package j04010;

import java.util.Scanner;

public class J04010 {

    public static void main(String[] args) {
          Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            Point[] a = new Point[3];
            for(int i = 0; i < 3; i++){
                a[i] = new Point(in.nextDouble(), in.nextDouble());
            }
            double x = a[0].distance(a[1]);
            double y = a[1].distance(a[2]);
            double z = a[0].distance(a[2]);
            if(x + y > z && x + z > y && y + z > x){
                double S = 1 / 4f * Math.sqrt((x + y + z) * (x + y - z) * (x - y + z) * (-x + y + z));
                double R = (x * y * z) / (4 * S);
                System.out.printf("%.3f\n", Math.PI * R * R);
            }
            else{
                System.out.println("INVALID");
            }
        }
    }
    
}
