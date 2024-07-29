package j04002;

import java.util.Scanner;

class Rectange{
    private double width, height;
    private String color;
    public Rectange(){
        height = 1;
        width = 1;
    }
    public Rectange(double width, double height, String color){
        this.width = width;
        this.height = height;
        this.color = color;
    }

    public double getWidth() {
        return width;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public String getColor() {
        return color.substring(0, 1).toUpperCase() + color.substring(1).toLowerCase();
    }

    public void setColor(String color) {
        this.color = color;
    }
    public double findArea(){
        return width * height;
    }
    public double findPerimeter(){
        return 2 * (width + height);
    }
    @Override
    public String toString(){
        return String.format("%d %d %s", (int)findPerimeter(), (int)findArea(), getColor());
    }
}

public class J04002 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double w = in.nextDouble();
        double h = in.nextDouble();
        String c = in.next();
        if(w > 0 && h > 0){
            Rectange hcn = new Rectange(w, h, c);
            System.out.println(hcn);
        }
        else{
            System.out.println("INVALID");
        }
    }
    
}
