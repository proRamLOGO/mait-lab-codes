import java.util.*;

public class P29_SuperKeyword {

    public static class Computer {
        public String name ;
        public Computer( String name ) {
            this.name = name ;
        }
        public void boot() {
            System.out.println("\nBooting Computer... "+this.name);
        }
    }
    
    public static class MicroComputer extends Computer {
        public String type ;
        public int batteryLevel ;
        public MicroComputer( String name ) {
            super(name);
        }
        public void setType( int t ) {
            this.type = (t==1) ? "Personal" : "Work" ;
        }
        public String getType() {
            return this.type ;
        }
    }

    public static class Laptop extends MicroComputer {
        public Laptop( String name, int type ) {
            super(name); // 1. Constructor Call
            super.setType(type); // 2. Method Call
            this.setBatteryLevel();
        }
        public void setBatteryLevel() {
            super.batteryLevel = 90 ; // 3. Attribute Use
        }
        public int getBatteryLevel() {
            return super.batteryLevel ;
        }
    }

    public static void main( String[] args ) {
        
        Laptop macBook = new Laptop("proRam's MacBook Pro", 1);
        macBook.boot();
        System.out.println("Type of "+macBook.name+" is "+macBook.getType()+".");
        System.out.println("Battery Level of "+macBook.name+" is "+macBook.getBatteryLevel()+"%.\n");

    }

}