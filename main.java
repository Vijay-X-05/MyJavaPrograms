import java.io.*;
import java.util.*;
class Dog{
    void sound(){
        System.out.println("Dog Barks: 🦮Bhow Bhow");
    }
}
class Cat{
    void sound(){
        System.out.println("Cat Barks: 🐈Meow Meow");
    }
}
public class main {
    public static void main(String[] args) {
        System.out.println("Animal Barking Sounds");
        Dog d= new Dog();
        Cat c= new Cat();
        d.sound();
        c.sound();
}
}