package j05042;

public class Student {
    private String ten;
    private int AC, submit;

    public Student(String ten, int AC, int submit) {
        this.ten = ten;
        this.AC = AC;
        this.submit = submit;
    }

    public String getTen() {
        return ten;
    }

    public int getAC() {
        return AC;
    }

    public int getSubmit() {
        return submit;
    }

    @Override
    public String toString() {
        return ten + " " + AC + " " + submit;
    }
    
    
}
