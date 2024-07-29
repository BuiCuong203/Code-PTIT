package j05032;

import java.util.Date;

public class Person {
    private String ten, ns;

    public Person(String ten, String ns) {
        this.ten = ten;
        this.ns = ns;
    }

    public String getNs() {
        return ns.substring(6) + ns.substring(3, 5) + ns.substring(0, 2);
    }

    @Override
    public String toString() {
        return ten;
    }
    
}
