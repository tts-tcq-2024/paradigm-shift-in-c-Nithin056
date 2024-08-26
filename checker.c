#include <stdio.h>
#include <assert.h>

int CheckInRange(float value, float min, float max, const char* parameterName)
{if(value < min || value > max) {
printf("%s out of range bound/n",parameterName);
return 0;
}
return 1;
}
Int batteryIsOk(Float temperature, float soc, float ChargeRate){
return CheckInRange(temperature,0,45,"Temperature") &&
  CheckInRange(soc,20,80,"State Of Charge") &&
  CheckInRange(ChargeRate,0,0.8, "Charge Rate");
}
int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));

}
