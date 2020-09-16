import java.util.*;

public class P23_This {

    public static class This {

        public int attribute;
        public static int globalAttribute ;

        public This( int attribute ) {
            this.attribute = attribute;
            globalAttribute++ ;
        }

    }

    public static void main( String[] args ) {

        Scanner in = new Scanner( System.in );
        
        System.out.print("\nEnter Value:       ") ;
        int val = in.nextInt();

        This This1 = new This(val) ;
        System.out.println( This1.attribute + ", " + This.globalAttribute );

        This This2 = new This(val+12) ;
        System.out.println( This2.attribute + ", " + This.globalAttribute );
        
        This This3 = new This(val+45) ;
        System.out.println( This3.attribute + ", " + This.globalAttribute );

    }

}