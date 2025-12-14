//Потеря точности
#include <iostream>

int main()
{
  double price = 19.99;
  int rounded {price};
  std::cout<<rounded;
  return 0;
}
//Здесь будет предупреждение о переводе double в int и возможной потере значений, но затем последует ответ - 19 :)

/*main.cpp:7:16: warning: narrowing conversion of ‘price’ from ‘double’ to ‘int’ [-Wnarrowing]
    7 |   int rounded {price};
      |                ^~~~~

19

...Program finished with exit code 0
Press ENTER to exit console.*/
