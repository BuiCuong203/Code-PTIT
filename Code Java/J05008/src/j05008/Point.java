package j05008;

import static java.lang.Math.pow;
import static java.lang.Math.sqrt;

public class Point {
    private double x, y;

    public Point() {
        this.x = 1;
        this.y = 1;
    }

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }
    public Point(Point p){
        p.x = x;
        p.y = y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }
    
    public double distance(Point p){
        return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
    }
    
    public double distance(Point p1, Point p2){
        return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    }

    public double change(Point p1, Point p2){
        return p1.x * p2.y - p1.y * p2.x;
    }
    
    public double change(Point p){
        return this.x * p.y - this.y * p.x;
    }
    
    @Override
    public String toString() {
        return x + " " + y;
    }
}
