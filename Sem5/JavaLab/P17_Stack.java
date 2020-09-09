import java.util.*;
import java.io.*;

public class P17_Stack {

    public static class Stack {

        int size, top;
        int[] stk ;

        public Stack( int size ) {
            this.size = size ;
            this.stk = new int[size] ;
            this.top = -1 ;
        }

        public boolean push( int val ) {
            if ( this.top+1 == this.size ){
                System.out.println("OVERFLOW !!");
                return false ;
            } else {
                ++this.top ;
                this.stk[this.top] = val ;
                return true ;
            }
        }

        public int pop() {
            if ( this.top == -1 ){
                System.out.println("UNDERFLOW !!");
                return -1 ;
            } else {
                --this.top ;
                return this.stk[this.top+1] ;
            }
        }

        public int top() {
            if (this.top == -1 ){
                System.out.println("STACK EMPTY !!");
                return -1 ;
            } else {
                return this.stk[this.top] ;
            }
        }

    }

    public static void main( String[] args ) {

        Scanner in = new Scanner( System.in );

        System.out.print("Stack Size Desired:  ");
        int n = in.nextInt();

        Stack stk = new Stack(n) ;

        while (true) {
            System.out.println();
            System.out.print("1. Push to Stack\n2. Pop from Stack\n3. Access top element.\n4. Exit\nChoice:     ");
            int choice = in.nextInt() ;

            if ( choice==1 ) {
                int val = in.nextInt();
                if ( stk.push(val) ) {
                    System.out.println("Pushed "+val+" successfully");
                } else {
                    System.out.println("Pushing unsuccessfull !!");
                }
            } else if ( choice==2 ) {
                stk.pop();
            } else if ( choice==3 ) {
                System.out.println(stk.top());
            } else if ( choice==4 ) {
                break;
            } else {
                System.out.println("Invalid Option!!");
            }
            
        }
        System.out.println() ;

    }

}