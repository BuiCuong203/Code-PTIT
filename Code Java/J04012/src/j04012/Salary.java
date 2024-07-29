package j04012;

public class Salary {
     private String id, name;
    private int salary, bonus, allowance;

    public Salary(){
        
    }
    
    public Salary(String name, int wage, int workingDays, String role) {
        this.id = "NV01";
        this.name = name;
        this.salary = wage * workingDays;

        if (workingDays >= 25) {
            this.bonus = (int) (salary * 0.2f);
        } else if (workingDays >= 22) {
            this.bonus = (int) (salary * 0.1f);
        } else {
            this.bonus = 0;
        }

        switch (role) {
            case "GD":
                allowance = 250000;
                break;
            case "PGD":
                allowance = 200000;
                break;
            case "TP":
                allowance = 180000;
                break;
            case "NV":
                allowance = 150000;
                break;
        }
    }

    public int getIncome() {
        return salary + bonus + allowance;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + salary + " " + bonus + " " + allowance + " " + getIncome();
    }
}
