package b3;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;

public class B3 {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc1 = new Scanner(new File("MONHOC.in"));
        Scanner sc2 = new Scanner(new File("LICHGD.in"));
        int t1 = Integer.parseInt(sc1.nextLine());
        ArrayList<MonHoc> a1 = new ArrayList<>();
        ArrayList<LichGD> a2 = new ArrayList<>();
        for(int i = 0; i < t1; i++){
            String ma = sc1.nextLine();
            String ten = sc1.nextLine();
            int tc = Integer.parseInt(sc1.nextLine());
            a1.add(new MonHoc(ma, ten, tc));
        }
        int t2 = Integer.parseInt(sc2.nextLine());
        for(int i = 0; i < t1; i++){
            String ma = sc1.nextLine();
            int thu = Integer.parseInt(sc2.nextLine());
            int kip = Integer.parseInt(sc2.nextLine());
            String tengv = sc1.nextLine();
            int phong = Integer.parseInt(sc2.nextLine());
            a2.add(new LichGD(i, ma, thu, kip, tengv, phong));
        }
        
    }
    
}
