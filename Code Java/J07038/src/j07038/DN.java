package j07038;

public class DN {
    private String madn, tendn;
    private int sosv;

    public DN(String madn, String tendn, int sosv) {
        this.madn = madn;
        this.tendn = tendn;
        this.sosv = sosv;
    }

    public String getMadn() {
        return madn;
    }

    public String getTendn() {
        return tendn;
    }

    public int getSosv() {
        return sosv;
    }
    
}
