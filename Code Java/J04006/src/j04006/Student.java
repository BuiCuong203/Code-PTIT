package j04006;

public class Student {
    private String msv = "B20DCCN001";
    private String ten, lop, ns;
    private float gpa;
    public Student(String ten, String lop, String ns, float gpa){
        this.ten = ten;
        this.lop = lop;
        this.ns = ns;
        this.gpa = gpa;
    }
    public String change(){
        StringBuilder sb = new StringBuilder(ns);
        if(sb.charAt(1) == '/') sb.insert(0, '0');
        if(sb.charAt(4) == '/') sb.insert(3, '0');
        return sb.toString();
    }
    
    @Override
    public String toString(){
        return msv + " " + ten + " " + lop + " " + change() + " " + String.format("%.2f", gpa);
    }
}
