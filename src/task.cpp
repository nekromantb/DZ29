#include "task.h"
#include <iostream>

class Animal
{
public:
    virtual void voice(Animal* animal) = 0;
    virtual std::string ID() = 0;
};

class Dog: virtual public Animal
{
public:
    virtual std::string ID()
    {
        return "dog";
    }
    virtual void voice(Animal* animal)
    {
        if (animal->ID() == "dog")
        {
            std::cout << "Woof";
        }
        else
        {
            std::cout << "Bark";
        }
    }
};

class Cat: virtual public Animal
{
public:
    virtual std::string ID()
    {
        return "cat";
    }
    virtual void voice(Animal* animal)
    {
        if (animal->ID() == "cat")
        {
            std::cout << "Purr";
        }
        else
        {
            std::cout << "Meow";
        }
    }
};

void meeting (Animal* first, Animal* second)
{
    first->voice(second);
    if (first->ID() == "dog" && second->ID() == "dog")
        std::cout << "-";
    else
        std::cout << " ";
    second->voice(first);
    std::cout << std::endl;
}

void task()
{
    Animal* a = new Dog();
    Animal* b = new Dog();
    meeting(a,b);
    delete a;
    delete b;
    a = nullptr;
    b = nullptr;
    delete a;
    delete b;
}