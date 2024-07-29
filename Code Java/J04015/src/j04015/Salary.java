package j04015;

public class Salary {
    private String ma, ten;
    private int lcb, hs, pc;
    public Salary(String ma, String ten, int lcb){
        this.ma = ma;
        this.ten = ten;
        this.lcb = lcb;
        
        hs = Integer.parseInt(ma.substring(2));
        
        if(ma.substring(0, 2).equals("HT")){
            pc = 2000000;
        }else if(ma.substring(0, 2).equals("HP")){
            pc = 900000;
        }else if(ma.substring(0, 2).equals("GV")){
            pc = 500000;
        }
    }
    public int luong(){
        return lcb * hs + pc;
    }
    @Override
    public String toString(){
        return ma + " " + ten + " " + hs + " " + pc + " " + luong();
    }
    
}
