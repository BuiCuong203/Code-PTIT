package j07010;

import java.text.ParseException;
import java.text.SimpleDateFormat;

class Student {

    public static int NUM_STUDENT = 1;
    private String id, name, lop, dob;
    private float gpa;

    public Student(String name, String lop, String dob, float gpa) throws ParseException {
        this.id = "B20DCCN" + String.format("%03d", NUM_STUDENT++);
        this.name = name;
        this.lop = lop;
        this.gpa = gpa;

        SimpleDateFormat sdf = new SimpleDateFormat("dd/mm/yyyy");
        this.dob = sdf.format(sdf.parse(dob));
    }

    @Override
    public String toString() {
        return id + " " + name + " " + lop + " " + dob + " " + String.format("%.2f", gpa);
    }
}
