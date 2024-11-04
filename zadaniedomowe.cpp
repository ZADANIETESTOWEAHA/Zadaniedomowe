public class Student {
    // Prywatne pola klasy, czyli dane dostêpne tylko wewn¹trz tej klasy
    private String name;
    private int age;
 
    // Konstruktor klasy, pozwala na utworzenie nowego obiektu Student i przypisanie wartoœci pocz¹tkowych
    public Student(String name, int age) {
        this.name = name; // this.name odnosi siê do pola name w tej klasie
        this.age = age;   // this.age odnosi siê do pola age w tej klasie
    }
 
    // Getter dla pola name, umo¿liwia dostêp do prywatnego pola name
    public String getName() {
        return name;  // Zwraca wartoœæ pola name
    }
 
    // Setter dla pola name, umo¿liwia modyfikacjê prywatnego pola name
    public void setName(String name) {
        this.name = name;  // Przypisuje now¹ wartoœæ do pola name
    }
 
    // Getter dla pola age, umo¿liwia dostêp do prywatnego pola age
    public int getAge() {
        return age;  // Zwraca wartoœæ pola age
    }
 
    // Setter dla pola age, umo¿liwia modyfikacjê prywatnego pola age
    public void setAge(int age) {
        // Sprawdzamy, czy wiek jest prawid³owy (wiêkszy lub równy 0)
        if (age >= 0) {
            this.age = age;
        } else {
            System.out.println("Wiek nie mo¿e byæ ujemny!");
        }
    }
 
    // Publiczna metoda wyœwietlaj¹ca dane studenta
    public void displayInfo() {
        System.out.println("Imiê: " + getName() + ", Wiek: " + getAge());
    }
}
