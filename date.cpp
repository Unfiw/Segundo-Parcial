#include <iostream>
#include <string>

class Date {

private:
  int nDay, nMonth, nYear;

public:
  std::string date;

  void setDate(std::string _date) { date = _date; }

  std::string getDate() { return date; }

  std::string sToInt() {

    std::string day, month, year;

    day = date.substr(0, 2);
    std::cout << day << std::endl;
    date.erase(0, 3);

    month = date.substr(0, 2);
    std::cout << month << std::endl;
    date.erase(0, 3);

    year = date.substr(0, 4);
    std::cout << year << std::endl;

    vDay(day);
    vMonth(month);
    vYear(year);

    vDate();
    Bisiesto();
  }

  void vDay(std::string day) { nDay = stoi(day); }

  void vMonth(std::string month) { nMonth = stoi(month); }

  void vYear(std::string year) { nYear = stoi(year); }

  Date(std::string _date) { date = _date; }

  bool Bisiesto() {

    bool bisiesto;

    if (nYear % 4 == 0 && nYear != 2000) { if(nDay == 29){ return true;}}
    
  }
    void vDate(){

    bool r, d;
    switch (nMonth) {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        if( nDay <= 31 ){ r = true; } else { r = false; }
        break;
      case 4:
      case 6:
      case 9:
      case 11:
        if( nDay <= 30 ){ r = true; } else { r= false; }
        break;
      case 2:
        if( nDay <= 28 ){ r = true; } else { r= false; }
        d = Bisiesto();
        if(r == true || d == true){ std::cout << "UwU" << std::endl; exit; } else{std::cout << "The date not exist" << std::endl; }   
      
    } 
  }
};

int main() {
  std::string d = "";
  char exitDate;

  do{
  system("clear");
  std::cout << "Insert a date: " << std::endl;
  std::cin >> d;
  Date uwu = Date(d);
  std::cout << "Date: " << uwu.getDate() << std::endl;
  uwu.sToInt();
  std::cout << "Press U to finish the program\n" << std::endl; std::cin >> exitDate;

  }while(exitDate != 'U');
  return 0;
 
}
