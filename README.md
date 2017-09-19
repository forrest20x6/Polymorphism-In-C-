# Polymorphism-In-CPP

When I learned about the concept of polymorphism in the Object-Oriented Programming course I took in college, I learned about it in the context of the Java programming language. I can't really say that I understood polymorphism very well when I first learned about, but recently, I've been gaining a more solid understanding of how it works and why it is so powerful.

Up to the Object-Oriented Programming course, all of my programming projects in college were completed in C/C++ (Foundations of CS I & II and Data Structures). We never learned how to implement inheritance and polymorphism in C++, though, which got me wondering what that would actually look like. Thus, I've created this toy program to demonstrate a very lighweight implementation of inheritance and polymorphism in C++.

Making a sound ("Woof" in the case of Dog, for example) is the polymorphic behavior in this program, and each derived class of Animal has its own unique, albeit basic, impletation of that behavior.

Other methods, such as getWeight(), are inherited from Animal and therefore need no implementations in any of Animal's derived classes.

I decided to implement the base class, Animal, as an abstract class, since it wouldn't really make since for an unspecified animal to make a particular sound. Because Animal is an abstract class and cannot be instantiated, an array of pointers to type Animal is needed in order to acheive polymorphim using its derived classes.
