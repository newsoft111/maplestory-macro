#include <Keyboard.h>

int randomNum;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Arduino ready.");
}

void loop() {
  delay(random(40, 90));
  Keyboard.releaseAll(); //모든 키보드를 초기화합니다

  Keyboard.press(KEY_RIGHT_ARROW); // 오른쪽 방향키 누름
  delay(random(250, 300));
  
  
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

  Keyboard.release(KEY_LEFT_ARROW); // 왼쪽 방향키 땜
  delay(random(40, 90));
}

void attack() {
  randomNum = random(3);
  Keyboard.press(KEY_LEFT_SHIFT); // 물약먹음 누름
  delay(random(250, 300));
  Keyboard.release(KEY_RIGHT_ARROW); // 물약먹음 땜
  if (randomNum == 0)
  {
    Keyboard.press(KEY_LEFT_ALT); // 점프 누름
    delay(random(40, 60));
    Keyboard.release(KEY_LEFT_ALT); // 점프 땜
    delay(random(60, 100));

    Keyboard.press(KEY_LEFT_ALT); // 점프 누름
    delay(random(40, 60));
    Keyboard.release(KEY_LEFT_ALT); // 점프 땜
    delay(random(80, 110));
  
    Keyboard.press(KEY_DELETE); // 로어 누름
    delay(random(40, 60));
    Keyboard.release(KEY_DELETE); // 로어 땜
    delay(random(600, 650));
  }
  else if (randomNum == 1)
  {
    Keyboard.press(KEY_LEFT_ALT); // 점프 누름
    delay(random(40, 60));
    Keyboard.release(KEY_LEFT_ALT); // 점프 땜
    delay(random(60, 100));

    Keyboard.press(KEY_LEFT_ALT); // 점프 누름
    delay(random(80, 110));
    Keyboard.press(KEY_DELETE); // 로어 누름
    delay(random(40, 60));
       
    Keyboard.release(KEY_DELETE); // 로어 땜
    delay(random(600, 650));
    Keyboard.release(KEY_LEFT_ALT); // 점프 땜
    delay(random(60, 100));
  }
  else
  {
    Keyboard.press(KEY_LEFT_ALT); // 점프 누름
    delay(random(40, 60));
    Keyboard.release(KEY_LEFT_ALT); // 점프 땜
    delay(random(60, 100));

    Keyboard.press(KEY_LEFT_ALT); // 점프 누름
    delay(random(80, 110));
    Keyboard.press(KEY_DELETE); // 로어 누름
    delay(random(40, 60));
       
    Keyboard.release(KEY_LEFT_ALT); // 점프 땜
    delay(random(60, 100));
    Keyboard.release(KEY_DELETE); // 로어 땜
    delay(random(600, 650));
  }
}
