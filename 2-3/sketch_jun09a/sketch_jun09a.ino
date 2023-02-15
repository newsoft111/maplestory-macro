#include <Keyboard.h>

int randomNum;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Arduino ready.");
}

void loop() {
  delay(3000); //채터링을 방지하기위해 잠시 대기합니다
  for (int i=0; i<8; i++)
  {
    macro();
  }
  delay(random(900, 1100));
  Keyboard.press('3'); // 스포트라이트 입력
  delay(random(40, 60));
  Keyboard.release('3'); // 스포트라이트 땜
  delay(random(13000, 14000));
}

void macro() {
  Keyboard.releaseAll(); //혹시모를 간섭을 방지하기 위하여 모든 키보드를 초기화합니다

  for (int i=0; i<15; i++)
  {
    Seeker();
  }

  buff();
  
  randomNum = random(3);
  if (randomNum == 1)
  {
    randomSkill();
  }

  Keyboard.releaseAll(); //모든 키보드를 초기화합니다
}

void Seeker() {
  randomNum = random(5);
  if (randomNum == 2)
  {
    Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
    delay(random(40, 60));
    Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
    delay(random(350, 450));
  }
  else
  {
    Keyboard.press(KEY_UP_ARROW); // 위 방향키 누름
    delay(random(50, 70));
    Keyboard.release(KEY_UP_ARROW); // 위 방향키 땜
    delay(random(300, 400));
    
    Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
    delay(random(40, 60));
    Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
    delay(random(350, 450));
  }
}

void randomSkill() {
  randomNum = random(5);
  if (randomNum == 1)
  {
    Keyboard.press('d'); // 페투치아 누름
    delay(random(40, 60));
    Keyboard.release('d'); // 페투치아 땜
    delay(random(1050, 1100));
  }
  else if (randomNum == 2)
  {
    Keyboard.press('1'); // 노바 누름
    delay(random(40, 60));
    Keyboard.release('1'); // 노바 땜
    delay(random(900, 950));
  }
  else
  {
    Keyboard.press(KEY_DELETE); // 로어 누름
    delay(random(40, 60));
    Keyboard.release(KEY_DELETE); // 로어 땜
    delay(random(800, 850));
  }
}


void buff() {
  randomNum = random(2);
  if (randomNum == 1)
  {
    delay(random(250, 350));
    Keyboard.press('6'); // 매크로 버프 누름
    delay(random(50, 150));
    Keyboard.release('6'); // 매크로 버프 땜
    delay(random(1500, 2000));
  }
}
