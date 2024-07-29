package j04014;

import java.util.Scanner;


public class J04014 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
           PS a = new PS(in.nextLong(), in.nextLong());
           PS b = new PS(in.nextLong(), in.nextLong());
           PS c = new PS((long)Math.pow(a.getT() * b.getM() + a.getM() * b.getT(), 2), (long)Math.pow(a.getM() * b.getM(), 2));
           c = PS.rutgon(c);
           PS d = new PS(a.getT() * b.getT() * c.getT(), a.getM() * b.getM() * c.getM());
           d = PS.rutgon(d);
           System.out.println(c + " " + d);
        }
    }
    
}
