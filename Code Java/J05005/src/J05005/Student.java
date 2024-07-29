package J05005;

public class Student implements Comparable<Student>{
    private int msv;
    private String ten, lop, ns;
    private float gpa;
    
    Student(int msv, String ten, String lop, String ns, float gpa){
        this.msv = msv;
        this.ten = ten;
        this.lop = lop;
        this.ns = ns;
        this.gpa = gpa;
    }
    
    public String getns(){
        StringBuilder s = new StringBuilder(ns);
        if(s.charAt(1) == '/') s.insert(0, 0);
        if(s.charAt(4) == '/') s.insert(3, 0);
        return s.toString();
    }
    
    public String getten(){
        String tmp = "";
        String[] a = ten.trim().split("\\s+");
        for(int i = 0; i < a.length; i++){
            tmp += a[i].toUpperCase().charAt(0);
            for(int j = 1; j < a[i].length(); j++){
                tmp += a[i].toLowerCase().charAt(j);
            }
            if(i != a.length) tmp += " ";
        }
        return tmp;
    }
    
    @Override
    public String toString(){
        return "B20DCCN" + String.format("%03d",msv) + " " + getten() + " " + lop + " " + getns() + " " + String.format("%.2f", gpa);
    }
    
    public float getgpa() {
        return gpa;
    }
    
    @Override
    public int compareTo(Student a){
        if(a.getgpa() > getgpa()) return 1;
        return -1;
    }
}
