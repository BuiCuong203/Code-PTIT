package J05004;

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
    
    public String getns(){
        StringBuilder sb = new StringBuilder(ns);
        if(sb.charAt(1) == '/') sb.insert(0, 0);
        if(sb.charAt(4) == '/') sb.insert(3, 0);
        return sb.toString();
    }
    
    public String getten(){
        String tmp = "";
        String[] arr = ten.trim().split("\\s+");
        for(int i = 0; i < arr.length; i++){
            tmp += arr[i].toUpperCase().charAt(0);
            for(int j = 1; j < arr[i].length(); j++){
                tmp += arr[i].toLowerCase().charAt(j);
            }
            if (i != arr.length - 1) tmp += " ";
        }
        return tmp;
    }
    
    @Override
    public String toString(){
        return "B20DCCN" + String.format("%03d", msv) + " " + getten() + " " + lop + " " + getns() + " " + String.format("%.2f", gpa);
    }
}
