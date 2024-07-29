package J04018;

public class So_phuc {
    private int thuc, ao;
    
    public So_phuc(int thuc, int ao){
        this.thuc = thuc;
        this.ao = ao;
    }
    
    @Override
    public String toString(){
        String tmp = "";
        tmp += thuc + " ";
        if(ao >= 0){
            tmp += "+ " + ao + "i";
        }
        else{
            tmp += "- " + (-ao) + "i";
        }
        return tmp;
    }
    
    public static So_phuc sum(So_phuc a, So_phuc b){
        return new So_phuc(a.thuc + b.thuc, a.ao + b.ao);
    }
    
    public static So_phuc mul(So_phuc a, So_phuc b){
        return new So_phuc(a.thuc * b.thuc - a.ao * b.ao, a.thuc * b.ao + a.ao * b.thuc);
    }
}
