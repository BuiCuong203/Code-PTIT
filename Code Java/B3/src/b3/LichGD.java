package b3;

public class LichGD {
    private String ma, tengv;
    private int stt, thu, kip, phong;

    public LichGD(int stt, String ma, int thu, int kip, String tengv, int phong) {
        this.ma = ma;
        this.tengv = tengv;
        this.thu = thu;
        this.kip = kip;
        this.phong = phong;
        this.stt = stt;
    }

    @Override
    public String toString() {
        return String.format("HP%03d", stt) + " "
    }
    
    
}
