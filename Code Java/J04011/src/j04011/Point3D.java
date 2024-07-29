package j04011;

public class Point3D {
    private int x, y, z;
    
    public Point3D(int x, int y, int z){
        this.x = x;
        this.y = y;
        this.z = z;
    }
    
    public static boolean check(Point3D A, Point3D B, Point3D C, Point3D D){
        Point3D AB = new Point3D(B.x - A.x, B.y - A.y, B.z - A.z);
        Point3D AC = new Point3D(C.x - A.x, C.y - A.y, C.z - A.z);
        Point3D AD = new Point3D(D.x - A.x, D.y - A.y, D.z - A.z);
        Point3D ABAC = new Point3D(AB.y * AC.z - AB.z * AC.y, AB.z * AC.x - AB.x * AC.z, AB.x * AC.y - AB.y * AC.x);
        long ans = ABAC.x * AD.x + ABAC.y * AD.y + ABAC.z * AD.z;
        return ans == 0;
    }
}
