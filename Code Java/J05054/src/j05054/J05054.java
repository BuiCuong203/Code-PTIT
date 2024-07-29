package j05054;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Scanner;

public class J05054 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<Student> a = new ArrayList<>();
        ArrayList<Student> b = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            Student tmp = new Student(i, sc.nextLine(), Float.parseFloat(sc.nextLine()));
            a.add(tmp);
            b.add(tmp);
        }
        Collections.sort(a, new Comparator<Student>(){
            @Override
            public int compare(Student o1, Student o2) {
                if(o1.getDiemtb() > o2.getDiemtb()) return -1;
                return 1;
            }
        });
        HashMap<Float, Integer> map = new HashMap<>();
        int cnt = 1;
        for(int i = 0; i < t; i++){
            if(i == 0) map.put(a.get(i).getDiemtb(), cnt);
            else{
                if(a.get(i).getDiemtb() == a.get(i - 1).getDiemtb()) cnt++;
                else{
                    cnt++;
                    map.put(a.get(i).getDiemtb(), cnt);
                }
            }
        }
        for(Student x : b){
            System.out.println(x + " " + map.get(x.getDiemtb()));
        }
    }
    
}
