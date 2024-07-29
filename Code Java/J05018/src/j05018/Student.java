package j05018;

class Student{

    public static int ma = 1;
    public String ten, id;
    public Float diemtb;

    public Student(String ten, float[] p) {
        this.ten = ten;
        this.id = String.format("HS%02d", ma++);
        this.diemtb = 0f;
        for (int i = 0; i < 10; i++) {
            diemtb += p[i] * ((i == 0 || i == 1) ? 2f : 1f);
        }
        diemtb /= 12f;
        diemtb = Math.round(diemtb * 10f) / 10f;
    }

    public String getId() {
        return id;
    }

    public Float getDiemtb() {
        return diemtb;
    }

    public String xeploai(float diemtb){
        if(diemtb >= 9f) return "XUAT SAC";
        if(diemtb >= 8f) return "GIOI";
        if(diemtb >= 7f) return "KHA";
        if(diemtb >= 5f) return "TB";
        return "YEU";
    }

    @Override
    public String toString() {
        return id + " " + ten + " " + String.format("%.1f", diemtb) + " " + xeploai(diemtb);
    }
}