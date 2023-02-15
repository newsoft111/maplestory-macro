#include <Keyboard.h>

int randomNum;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Arduino ready.");
}

void loop() {
  delay(2000); //채터링을 방지하기위해 잠시 대기합니다
  Keyboard.releaseAll(); //모든 키보드를 초기화합니다

  Keyboard.press(KEY_RIGHT_ARROW); // 오른쪽 방향키 누름
  delay(random(50, 100));
  
  attack();
  attack();
  attack();
  attack();
  attack();
  attack();
  attack();

  Keyboard.release(KEY_RIGHT_ARROW); // 오른쪽 방향키 땜
  delay(random(40, 90));
  
  Keyboard.press(KEY_LEFT_ARROW); // 왼쪽 방향키 누름
  delay(random(50, 100));
  
  attack();
  attack();
  attack();
  attack();
  attack();
  attack();
  attack();

  Keyboard.release(KEY_LEFT_ARROW); // 왼쪽 방향키 땜
  delay(random(40, 90));
}

void attack() {
  randomNum = random(2);
  if (randomNum == 0)
  {
    Keyboard.press(KEY_LEFT_CTRL); // 공격 누름
    delay(random(50, 100));
    Keyboard.press(KEY_LEFT_SHIFT); // 텔포 누름
    delay(random(100, 150));
    
    Keyboard.release(KEY_LEFT_CTRL); // 공격 땜
    delay(random(50, 100));
    Keyboard.release(KEY_LEFT_SHIFT); // 텔포 땜
    delay(random(550, 650));
  }
  else
  {    
    Keyboard.press(KEY_LEFT_CTRL); // 공격 누름
    delay(random(50, 100));
    Keyboard.release(KEY_LEFT_CTRL); // 공격 땜
    delay(random(100, 150));
  
    Keyboard.press(KEY_LEFT_SHIFT); // 텔포 누름
    delay(random(50, 100));
    Keyboard.release(KEY_LEFT_SHIFT); // 텔포 땜
    delay(random(550, 650));
  }
}
