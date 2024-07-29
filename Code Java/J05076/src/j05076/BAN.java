package j05076;

public class BAN {
    private String ma;
    private int sln, dg, slx;
    private MH mh;

    public BAN(MH mh, String ma, int sln, int dg, int slx) {
        this.mh = mh;
        this.ma = ma;
        this.sln = sln;
        this.dg = dg;
        this.slx = slx;
    }
    
    public int getGn(){
        return sln * dg;
    }
    
    public int getGx(){
        int tien = dg * slx;
        if(mh.getXl() == 'A') return tien * 108 /100;
        else if(mh.getXl() == 'B') return tien * 105 /100;
        return tien * 102 /100;
    }
    
    @Override
    public String toString() {
        return mh.getMa() + " " + mh.getTen() + " " + getGn() + " " + getGx();
    }
    
}
