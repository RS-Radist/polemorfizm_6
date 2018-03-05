//
//В заданиии требуется создать базовый класс (как вариант, абстрактный базовый класс) и определить общие методы show ( ), get ( ), set ( ) и другие, специфические для данного класса. Создать производные классы, в которых добавить специфические свойства и методы.

//Часть методов переопределить. Создать массив объектов (указателей на объекты) базового класса и заполнить объектами (указателями на объекты) производных классов. Объекты производных классов идентифицировать конструктором по имени или идентификационному номеру.

//Вызвать метод show ( ) базового класса и просмотреть массив объектов.

//Использовать объекты производных классов для моделирования реальных ситуаций и объектов.

//Задание.
//Создать базовый класс «Домашнее животное» и производные классы «Собака», «Кошка», «Попугай». С помощью конструктора установить имя каждого животного и его характеристики.

#include <iostream>
using namespace std;

class Home_Animal
{
public:
    virtual char* Get()=0;
    virtual int GetNumber()=0;
    virtual void Set(char*temp,int _number)=0;
    void Show()
    {
       //
    }
};


void Show2(Home_Animal* h)
{
    cout<<h->Get()<<" "<<h->GetNumber()<<endl;
}


class Dog : public Home_Animal
{
private:
    int number;
    char * name;
public:
    
    Dog(char * temp,int _number)
    {
        number=_number;
        name = new char [strlen(temp)+1];
        strcpy(name, temp);
        
    }
    char* Get()
    {
        return name;
    }
    void Set(char* temp,int _number)
    {
        number=_number;
        name = new char [strlen(temp)+1];
        strcpy(name, temp);
    }
    int GetNumber()
    {
        return number;
    }
    
};
class Cat:public Home_Animal
{
private:
    int number;
    char * name;
public:
    Cat(char * temp,int _number)
    {
        number=_number;
        name = new char [strlen(temp)+1];
        strcpy(name, temp);
        
    }
    char* Get()
    {
        return name;
    }
    void Set(char* temp,int _number)
    {
        number=_number;
        name = new char [strlen(temp)+1];
        strcpy(name, temp);
    }
    int GetNumber()
    {
        return number;
    }

};

class Parrot:public Home_Animal
{
private:
    int number;
    char * name;
public:
    Parrot(char * temp,int _number)
    {
        number=_number;
        name = new char [strlen(temp)+1];
        strcpy(name, temp);
        
    }
    char* Get()
    {
        return name;
    }
    void Set(char* temp,int _number)
    {
        number=_number;
        name = new char [strlen(temp)+1];
        strcpy(name, temp);
    }
    int GetNumber()
    {
        return number;
    }
};


int main()
{
    Home_Animal* home_animal[3];
    home_animal[0]=new Dog("Dog",10);
    home_animal[1]=new Cat("Cat",30);
    home_animal[2]=new Parrot("Parrot",531);
    for (int i=0;i<3;++i)
    {
        Show2(home_animal[i]);
    }
    
    
    

   
    
    
    
    
}
