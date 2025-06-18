#include <stdio.h>

int main(void)
{
  double d1, d2, d3, d4; 
  float var_f;
  var_f = 10.0f; // если не поставить f компилятор будет ругаться на потерю данных

  d1 = 10.0f; // устанавливаем суффикс f и он занимает не 8 бит как double а как float 4
  d2 = -7.;
  d3 = 1e2;
  d4 = 5e-3;

  int size_float = sizeof(var_f); 
  /*sizeof - возвращает число байт которое занимает
  или переменная или тип данных
  sizeof (<type | name variable >);
  sizeof <name variable>;*/

  return 0; 
}
   