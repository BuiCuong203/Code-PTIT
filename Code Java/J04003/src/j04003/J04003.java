package j04003;

import java.util.Scanner;

class ps{
    private long t, m;
    public ps(long t, long m){
        this.t = t;
        this.m = m;
    }
    private long gcd(long a, long b){
        while(b != 0){
            long c = a % b;
            a = b;
            b = c;
        }
        return a;
    }
    @Override
    public String toString(){
        long u = gcd(t, m);
        return t/u + "/" + m/u;
    }
}

public class J04003 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ps a = new ps(in.nextLong(), in.nextLong());
        System.out.println(a);
    }
    
}
