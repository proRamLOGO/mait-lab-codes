import java.util.*;

public class P26_MethodOverriding {

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
        public void boot() {
            System.out.println("\nBooting Laptop... "+this.name);
        }
    }

    public static void main( String[] args ) {

        Computer superComputer = new Computer("Fugaku");
        superComputer.boot();
        
        Laptop macBook = new Laptop("proRam's MacBook Pro");
        macBook.boot();

        System.out.println();

    }

}