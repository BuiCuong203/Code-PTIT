package J04018;

import java.util.Scanner;

public class main {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            So_phuc a = new So_phuc(in.nextInt(), in.nextInt());
            So_phuc b = new So_phuc(in.nextInt(), in.nextInt());
            So_phuc tong = So_phuc.sum(a, b);
            So_phuc c = So_phuc.mul(tong, a);
            So_phuc d = So_phuc.mul(tong, tong);
            System.out.println(c + ", " + d);
        }
    }
}
