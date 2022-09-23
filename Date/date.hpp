#include <iostream>
#include <string>

class Date {

private:
  int nDay, nMonth, nYear;

public:
  std::string date;

  std::string getDate() { return date; }

  std::string sToInt() {

    std::string day, month, year;

    day = date.substr(0, 2);
    std::cout <<"Day: "<< day << std::endl;
    date.erase(0, 3);

    month = date.substr(0, 2);
    std::cout << "Month: "<< month << std::endl;
    date.erase(0, 3);

    year = date.substr(0, 4);
    std::cout << "Year: "<< year << std::endl;

    vDay(day);
    vMonth(month);
    vYear(year);

    vDate();
  }

  void vDay(std::string day) { nDay = stoi(day); }

  void vMonth(std::string month) { nMonth = stoi(month); }

  void vYear(std::string year) { nYear = stoi(year); }

  Date(std::string _date) { date = _date; }

  bool Bisiesto() {
    
    if (nYear % 4 == 0 && nYear != 2000) { if(nDay == 29){ return true;}}
    return false;
    
  }
    void vDate(){

    bool r = false, d = false;
    switch (nMonth) {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        if( nDay <= 31 ){ r = true; } if (r == true){std::cout << "\nUwuntu" << std::endl;}else{std::cout << "The date not exist" << std::endl;} 
        if (nDay > 31) { ExitDay();}
        break;
      case 4:
      case 6:
      case 9:
      case 11:
        if( nDay <= 30 ){ r = true; } if (r == true){std::cout << "\nUwuntu" << std::endl;} else{std::cout << "\nThe date not exist" << std::endl;}
        if (nDay > 30) { ExitDay();}
      break;
      case 2:
        if( nDay <= 28 ){ r = true; } 
        d = Bisiesto();
        if(r == true || d == true){ std::cout << "\nUwuntu" << std::endl; exit; } else{std::cout << "\nThe date not exist" << std::endl; }  
      default:
        if(nMonth > 12) { ExitMonth();}
    } 
  }
  
  int ExitMonth(){
  
  std::cout << "Invalid month" << std::endl;
  getchar();
  getchar();
  system("clear");
  return 1;
}

  int ExitDay(){
  
  std::cout << "Invalid day" << std::endl;
  getchar();
  getchar();
  system("clear");
  return 1;

}


};
