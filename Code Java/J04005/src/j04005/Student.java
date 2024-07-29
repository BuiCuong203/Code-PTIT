package j04005;

public class Student {
    private String ten, ns;
    private float diem1, diem2, diem3;
    public Student(String ten, String ns, float diem1, float diem2, float diem3){
        this.ten = ten;
        this.ns = ns;
        this.diem1 = diem1;
        this.diem2 = diem2;
        this.diem3 = diem3;
    }
    @Override
    public String toString(){
        return ten + " " + ns + " " + String.format("%.1f", diem1 + diem2 + diem3);
    }
}
