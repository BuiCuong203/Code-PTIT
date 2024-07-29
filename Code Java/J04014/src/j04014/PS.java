package j04014;

public class PS {
    private long t, m;
    
    public PS(long t, long m){
        this.t = t;
        this.m = m;
    }

    public long getT() {
        return t;
    }

    public long getM() {
        return m;
    }
    
    public static long gcd(long a, long b){
        while(b != 0){
            long c = a % b;
            a = b;
            b = c;
        }
        return a;
    }
    public static PS rutgon(PS o){
        long u = gcd(o.t, o.m);
        PS ans = new PS(o.t/u, o.m/u);
        return ans;
    }
    
    @Override
    public String toString(){
        return t + "/" + m;
    }
}
