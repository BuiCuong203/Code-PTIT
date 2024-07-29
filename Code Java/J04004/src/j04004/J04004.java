package j04004;

import java.util.Scanner;

class ps{
    private long t, m;
    public ps(long t, long m){
        this.t = t;
        this.m = m;
    }
    public long gcd(long a, long b){
        while(b != 0){
            long c = a % b;
            a = b;
            b = c;
        }
        return a;
    }
    public String tong_ps(ps a, ps b){
        long tu = a.t * b.m + a.m * b.t;
        long mau = a.m * b.m;
        long u = gcd(tu, mau);
        return tu/u + "/" + mau/u;
    }
}

public class J04004 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ps a = new ps(in.nextLong(), in.nextLong());
        ps b = new ps(in.nextLong(), in.nextLong());
        System.out.println(a.tong_ps(a, b));
    }
    
}
