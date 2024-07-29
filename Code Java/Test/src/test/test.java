package test;

public class test {

    public static void main(String args[]) {
        A a1 = new A();
        A a2 = new B();
        B b1 = (B) a2;
        System.out.println(a1.method());
        System.out.println(a2.method() + "\n");
        System.out.println(a1.x);
        System.out.println(b1.x);
    }
}
