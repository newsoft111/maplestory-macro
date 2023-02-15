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
  delay(random(250, 300));
  
  
  attack();
  attack();
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
  delay(random(250, 300));
  
  attack();
  attack();
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
    Keyboard.press(KEY_LEFT_ALT); // 점프 누름
    delay(random(10, 20));
    Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
    delay(random(50, 100));
    
    Keyboard.release(KEY_LEFT_ALT); // 점프 땜
    delay(random(100, 200));
    Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
    delay(random(200, 300));

    Keyboard.press(KEY_HOME); // 점프 땜
    delay(random(100, 200));
    Keyboard.release(KEY_HOME); // 시커 땜
    delay(random(1300, 1400));
  }
  else
  {
    Keyboard.press(KEY_LEFT_ALT); // 점프 누름
    delay(random(10, 20));
    Keyboard.release(KEY_LEFT_ALT); // 점프 땜
    delay(random(100, 200));
  
    Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
    delay(random(50, 100));
    Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
    delay(random(200, 300));

    Keyboard.press(KEY_HOME); // 점프 땜
    delay(random(100, 200));
    Keyboard.release(KEY_HOME); // 시커 땜
    delay(random(1300, 1400));
  }
}
