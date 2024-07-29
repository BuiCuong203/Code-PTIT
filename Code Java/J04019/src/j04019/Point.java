package j04019;

import java.util.Scanner;

public class Point {
    private double x;
    private double y;
    
    public Point(double x, double y){
        this.x = x;
        this.y = y;
    }
    
    public static Point nextPoint(Scanner scanner){
        return new Point(scanner.nextDouble(), scanner.nextDouble());
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }
    
}
