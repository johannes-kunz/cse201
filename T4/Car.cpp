#include <iostream>
#include <string>




class Engine{
private:
  std::string e;
public:
  Engine(){
    e = "generic";
  }
  Engine(std::string en){
    e = en;
  }
  void print(){
    std::cout << e << std::endl;
  }
};

class Seats{
private:
  std::string s;
public:
  Seats(){
    s = "generic";
  }
  Seats(std::string en){
    s = en;
  }
  void print(){
    std::cout << s << std::endl;
  }
};

class Wheels{
private:
  std::string s;
public:
  Wheels(){
    s = "generic";
  }
  Wheels(std::string en){
    s = en;
  }
  void print(){
    std::cout << s << std::endl;
  }
};

class Steeringwheel{
private:
  std::string s;
public:
  Steeringwheel(){
    s = "generic";
  }
  Steeringwheel(std::string en){
    s = en;
  }
  void print(){
    std::cout << s << std::endl;
  }
};
class Car{
private:
  std::string brand;
  std::string model;
  Engine engine;
  Wheels wheels[4];
  Steeringwheel steeringwheel;
  Seats seats[4];
public:
  Car(){
    brand = "generic";
    model = "generic";
    engine = Engine();
    for(int i=0;i<4;i++){
      wheels[i] = Wheels();
      seats[i] = Seats();
    }
    steeringwheel = Steeringwheel();
  }
  Car(std::string b, std::string m, std::string e, std::string w, std::string sw, std::string s){
    brand = b;
    model = m;
    engine = Engine(e);
    for(int i=0;i<4;i++){
      wheels[i] = Wheels(w);
      seats[i] = Seats(s);
    }
    steeringwheel = Steeringwheel(sw);
  }
  void print(){
    std::cout << "Brand:" << std::endl;
    std::cout << brand << std::endl;
    std::cout << "Model:" << std::endl;
    std::cout << model << std::endl;
    std::cout << "Engine:" << std::endl;
    engine.print();
    std::cout << "Wheels:" << std::endl;
    for(int i=0;i<4;i++){
      wheels[i].print();
    }
    std::cout << "Seats:" << std::endl;
    for(int i=0;i<4;i++){
      seats[i].print();
    }
    std::cout << "Steeringwheel:" << std::endl;
    steeringwheel.print();
  }
};
