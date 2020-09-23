import java.util.*;

public class P28_MultiLevelInheritance {

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
            super(name);
            this.setType(type);
        }
        public int getBatteryLevel() {
            return 100 ;
        }
    }

    public static void main( String[] args ) {
        
        Laptop macBook = new Laptop("proRam's MacBook Pro", 1);
        macBook.boot();
        System.out.println("Type of "+macBook.name+" is "+macBook.getType()+".");
        System.out.println("Battery Level of "+macBook.name+" is "+macBook.getBatteryLevel()+"%.\n");

    }

}