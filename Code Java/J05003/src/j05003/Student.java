package j05003;

class Student {
    private int msv;
    private String ten, lop, ns;
    private float gpa;
    
    public Student(int msv, String ten, String lop, String ns, float gpa){
        this.msv = msv;
        this.ten = ten;
        this.lop = lop;
        this.ns = ns;
        this.gpa = gpa;
    }
    
    public String getNS(){
        StringBuilder sb = new StringBuilder(ns);
        if(sb.charAt(1) == '/') sb.insert(0, 0);
        if(sb.charAt(4) == '/') sb.insert(3, 0);
        return sb.toString();
    }
    
    @Override
    public String toString(){
        return "B20DCCN" + String.format("%03d", msv) + " " + ten + " " + lop + " " + getNS() + " " + String.format("%.2f", gpa);
    }
}
