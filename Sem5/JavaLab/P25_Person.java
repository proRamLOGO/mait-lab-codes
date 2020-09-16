import java.util.*;

public class P25_Person {

    public static class Person {

        public int age, salary;
        public String name ;
        private static int population ;

        public Person( String name, int age, int salary) {
            this.name = name;
            this.age = age;
            this.salary = salary;
            ++population ;
        }

        public void updateSalary( int newSalary ) {
            this.salary = newSalary;
        }

        public void about() {
            System.out.println("Name of this person is " + this.name + ". He is " + this.age + " years old and makes " + this.salary + " per year.");
        }

        public static int getPopulation() {
            return population ;
        }

    }

    public static void main( String[] args ) {

        Scanner in = new Scanner( System.in );

        String name;
        int age, salary;

        System.out.print("\nName of Person :     ");
        name = in.next();
        System.out.print("\nAge of Person   :     ");
        age = in.nextInt();
        System.out.print("\nSalary of Person:     ");
        salary = in.nextInt();

        Person person = new Person(name,age,salary);
        person.about();

        System.out.println();

    }

}