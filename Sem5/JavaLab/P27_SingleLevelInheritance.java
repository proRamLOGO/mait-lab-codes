import java.util.*;

public class P27_SingleLevelInheritance {

    public static class Computer {
        public String name ;
        public Computer( String name ) {
            this.name = name ;
        }
        public void boot() {
            System.out.println("\nBooting Computer... "+this.name);
        }
    }

    public static class Laptop extends Computer {
        public Laptop( String name ) {
            super(name);
        }
        public int checkBatteryLevel() {
            return 100 ;
        }
    }

    public static void main( String[] args ) {

        Laptop macBook = new Laptop("proRam's MacBook Pro");
        macBook.boot();
        System.out.println("Battery Level for "+macBook.name+" is "+macBook.checkBatteryLevel()+"%.\n");

    }

}