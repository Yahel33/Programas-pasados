public class Main {
    public static void main(String [] args){
        TanjiroKamado tanjiro = new TanjiroKamado();
        Akaza akaza = new Akaza();

        System.out.println("---------Introduction-------");
        System.out.println(tanjiro.introduce());
        System.out.println(akaza.introduce());

        System.out.println("------Battle-------");
        tanjiro.attack();
        akaza.attack();
    }
}
