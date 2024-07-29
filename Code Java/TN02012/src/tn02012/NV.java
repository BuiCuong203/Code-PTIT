package tn02012;

public class NV {
    private String ma, ten;
    private int lcb, snc;

    public NV(String ma, String ten, int lcb, int snc) {
        this.ma = ma;
        this.ten = ten;
        this.lcb = lcb;
        this.snc = snc;
    }

    public String getMa() {
        return ma;
    }
    
    public int getHsn(){
        char nhom = ma.charAt(0);
        int nam = Integer.parseInt(ma.substring(1, 3));
        if(nhom == 'A'){
            if(nam >= 1 && nam <= 3) return 10;
            else if(nam >= 4 && nam <= 8) return 12;
            else if(nam >= 9 && nam <= 15) return 14;
            else return 20;
        }
        if(nhom == 'B'){
            if(nam >= 1 && nam <= 3) return 10;
            else if(nam >= 4 && nam <= 8) return 11;
            else if(nam >= 9 && nam <= 15) return 13;
            else return 16;
        }
        if(nhom == 'C'){
            if(nam >= 1 && nam <= 3) return 9;
            else if(nam >= 4 && nam <= 8) return 10;
            else if(nam >= 9 && nam <= 15) return 12;
            else return 14;
        }
        else{
            if(nam >= 1 && nam <= 3) return 8;
            else if(nam >= 4 && nam <= 8) return 9;
            else if(nam >= 9 && nam <= 15) return 11;
            else return 13;
        }
    }
    
    public int getLuong(){
        return lcb * snc * getHsn() * 1000;
    }
    
    @Override
    public String toString() {
        return ma + " " + ten;
    }
    
}
