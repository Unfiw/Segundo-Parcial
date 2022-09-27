//Marco Antonio Becerra Díaz - 22110085

#include <iostream>
#include <string>
#include <cstdlib>

#include "date.hpp"

void exitD();

int main() {

  std::string d = "";
  char exitDate;

  do{

  system("clear");

  std::cout << "Insert a date\ndd/mm/yy\n\n: " ;
  std::cin >> d;

  if(d.size() < 10 || d.size() < 10){ exitD(); }

  else{

  Date uwu = Date(d);
  std::cout << "Date: " << uwu.getDate() << std::endl;
  uwu.sToInt();

  uwu.setDate(d);
  uwu.vDate();

    for(int i = 0; i <10 ; i++)
    {
      ++uwu;
      uwu.DisplayDate();
      std::cout<< std::endl;
    }
  
  std::cout << "\n[U] Exit\n\n[Any key] Again\n\n : " ; std::cin >> exitDate;
  }

  }while(exitDate != 'U');
  return 0; 
}

void exitD(){
  
  std::cout << "Insert a correct date" << std::endl;
  getchar();
  getchar();
  main();

}

