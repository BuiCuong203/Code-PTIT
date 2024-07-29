package b6;

import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;

public class B6 {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DAYSO.in"));
        int t = Integer.parseInt(sc.nextLine());
        String s = sc.nextLine();
        BigInteger nho = new BigInteger(s);
        BigInteger lon = new BigInteger(s);
        BigInteger tong = new BigInteger(s);
        while(t-->1){
            BigInteger a = new BigInteger(sc.nextLine());
            nho = nho.min(a);
            lon = lon.max(a);
            tong = tong.add(a);
        }
        System.out.println(nho);
        System.out.println(lon);
        System.out.println(tong);
    }
    
}
