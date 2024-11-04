public class Student {
    // Prywatne pola klasy, czyli dane dost�pne tylko wewn�trz tej klasy
    private String name;
    private int age;
 
    // Konstruktor klasy, pozwala na utworzenie nowego obiektu Student i przypisanie warto�ci pocz�tkowych
    public Student(String name, int age) {
        this.name = name; // this.name odnosi si� do pola name w tej klasie
        this.age = age;   // this.age odnosi si� do pola age w tej klasie
    }
 
    // Getter dla pola name, umo�liwia dost�p do prywatnego pola name
    public String getName() {
        return name;  // Zwraca warto�� pola name
    }
 
    // Setter dla pola name, umo�liwia modyfikacj� prywatnego pola name
    public void setName(String name) {
        this.name = name;  // Przypisuje now� warto�� do pola name
    }
 
    // Getter dla pola age, umo�liwia dost�p do prywatnego pola age
    public int getAge() {
        return age;  // Zwraca warto�� pola age
    }
 
    // Setter dla pola age, umo�liwia modyfikacj� prywatnego pola age
    public void setAge(int age) {
        // Sprawdzamy, czy wiek jest prawid�owy (wi�kszy lub r�wny 0)
        if (age >= 0) {
            this.age = age;
        } else {
            System.out.println("Wiek nie mo�e by� ujemny!");
        }
    }
 
    // Publiczna metoda wy�wietlaj�ca dane studenta
    public void displayInfo() {
        System.out.println("Imi�: " + getName() + ", Wiek: " + getAge());
    }
}
