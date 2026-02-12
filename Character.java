public abstract class Character{
    int age;
    String name;
    String rank;

    public Character(int age, String name, String rank){
        this.age = age;
        this.name = name;
        this.rank = rank;
    }
    String introduce(){
        return " i am " + name + ", age " + age + ", rank" + rank;
    }
    abstract void attack();
}

class DemonSlayer extends Character{
    String breathingStyle;
    public DemonSlayer(int age, String name, String rank){
        super(age,name,rank);
        this.breathingStyle = breathingStyle;

        System.out.println(" The demon slayer" + name + " have his first appareance ");
    }
    public void attack(){
        System.out.println(" The demon slayer " + name + " attack with " + breathingStyle);
    }
}

class Demon extends Character{
    String bloodDemonArt;

    public Demon(int age, String name, String rank, String bloodDemonArt){
        super(age,name,rank);
        this.bloodDemonArt = bloodDemonArt;

        System.out.println(" The Demon " + name + "Just get in");
    }
    public void attack(){
        System.out.println(" The demon " + name + " attack using" + bloodDemonArt);
    }
}
class TanjiroKamado extends DemonSlayer{
    public TanjiroKamado(){
        super(15, "Tanjiro Kamado", "Demon slayer");
        System.out.println(" Tanjiro is ready with sun breathing ");
    }
    public void attack() {
        System.out.println(name + " win the battle ");
    }
}
class Akaza extends Demon{
    public Akaza(){
        super(300, "Akaza", "Upper Moon 3", "Destructive Death");
        System.out.println(" Akaza appears with destructive death ");
    }
    public void attack(){
        System.out.println(name + " Uses his art blood but isnt enough ");
    }
}
