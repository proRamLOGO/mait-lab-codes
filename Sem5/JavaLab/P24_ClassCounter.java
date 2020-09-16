import java.util.*;

public class P24_ClassCounter {

    public static class Book {

        public int pages;
        public String name ;
        private static int totalBooks ;

        public Book( String name, int pages ) {
            this.name = name;
            this.pages = pages;
            ++totalBooks ;
        }

        public static int getTotalNumberOfBooks() {
            return totalBooks;
        }

    }

    public static void main( String[] args ) {

        Scanner in = new Scanner( System.in );
        String name;
        int pages ;

        while (true) {

            System.out.print("\n1. Add Book\n2. Exit\nChoice:     ") ;
            int choice = in.nextInt() ;

            if ( choice == 1 ) {

                System.out.print("\nEnter Book Name:       ") ;
                name = in.next();
                System.out.print("Enter No. of Pages:       ") ;
                pages = in.nextInt();

                Book book = new Book(name,pages) ;
                System.out.println( "New Book "+book.name+" added.\n" );

            } else if ( choice == 2 ) {
                System.out.println( "\nTotal " + Book.getTotalNumberOfBooks() + " books added.\n" );
                break;
            } else {
                System.out.println( "\nINVALID OPTION !!\n") ;
            }

        }
    }

}