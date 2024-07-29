package j04008;

import static java.lang.Math.*;
import java.util.Scanner;

class Point{
    private double x, y;
    public Point(){
        x = 0;
        y = 0;
    }
    public Point(double x, double y){
        this.x = x;
        this.y = y;
    }
    public Point(Point p){
        this.x = p.x;
        this.y = p.y;
    }
    public double getX(){
        return x;
    }

    public double getY() {
        return y;
    }
    public double distance(Point p){
        return sqrt(pow(this.x - p.x, 2) + pow(this.y - p.y, 2));
    }
    public double distance(Point p1, Point p2){
        return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    }
    @Override
    public String toString(){
        return x + " " + y;
    }
}

public class J04008 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            Point[] a = new Point[3];
            for(int i = 0; i < 3; i++){
                a[i] = new Point(in.nextDouble(), in.nextDouble());
            }
            double x = a[0].distance(a[1]);
            double y = a[1].distance(a[2]);
            double z = a[0].distance(a[2]);
            if(x + y > z && x + z > y && y + z > x){
                System.out.printf("%.3f\n", x + y + z);
                
            }
            else{
                System.out.println("INVALID");
            }
        }
    }
    
}
