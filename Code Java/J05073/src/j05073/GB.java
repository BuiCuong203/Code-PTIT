package j05073;

public class GB {
    private String ma;
    private int dg, sl;

    public GB(String ma, int dg, int sl) {
        this.ma = ma;
        this.dg = dg;
        this.sl = sl;
    }
    
    public double getThue(){
        if(ma.charAt(0) == 'T'){
            if(ma.charAt(ma.length() - 1) == 'C') return 0.2755;
            return 0.29;
        }
        else if(ma.charAt(0) == 'C'){
            if(ma.charAt(ma.length() - 1) == 'C') return 0.095;
            return 0.1;
        }
        if(ma.charAt(0) == 'D'){
            if(ma.charAt(ma.length() - 1) == 'C') return 0.076;
            return 0.08;
        }
        else{
            if(ma.charAt(ma.length() - 1) == 'C') return 0.019;
            return 0.02;
        }
    }
    
    public double getVc(){
        if(ma.charAt(0) == 'T') return 0.04;
        else if(ma.charAt(0) == 'C') return 0.03;
        else if(ma.charAt(0) == 'D') return 0.025;
        else return 0.005;
    }
    
    public double getTcp(){
        int nhap = dg * sl;
        return (nhap + nhap * (getThue() + getVc())) * 1.2 / sl;
    }

    @Override
    public String toString() {
        return ma + " " + String.format("%.2f", getTcp());
    }
}
