package j07038;

public class SV {
    private String masv, tensv, lop, email;

    public SV(String masv, String tensv, String lop, String email) {
        this.masv = masv;
        this.tensv = tensv;
        this.lop = lop;
        this.email = email;
    }

    public String getTensv() {
        String[] a = tensv.trim().split("\\s+");
        String s = "";
        for(int i = 0; i < a.length; i++){
            s += a[i].toUpperCase().charAt(0);
            s += a[i].toLowerCase().substring(1);
            if(i != a.length - 1) s += " ";
        }
        return s;
    }

    public String getMasv() {
        return masv;
    }

    public String getLop() {
        return lop;
    }

    public String getEmail() {
        return email;
    }
    
}
