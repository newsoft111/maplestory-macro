#include <Keyboard.h>

int randomNum;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Arduino ready.");
}

void loop() {
  delay(6000); //채터링을 방지하기위해 잠시 대기합니다
  for (int i=0; i<5; i++)
  {
    macro();
  }
  delay(random(900, 1100));
  Keyboard.press('3'); // 스포트라이트 입력
  delay(random(40, 60));
  Keyboard.release('3'); // 스포트라이트 땜
  delay(random(1000,1200));
  Keyboard.press(KEY_PAGE_DOWN); // 로프 입력
  delay(random(40, 60));
  Keyboard.release(KEY_PAGE_DOWN); // 로프 땜
  delay(random(5000, 6000));
}

void macro() {
  Keyboard.releaseAll(); //혹시모를 간섭을 방지하기 위하여 모든 키보드를 초기화합니다
  delay(random(500, 700));
  dice();
  Keyboard.press(KEY_LEFT_ARROW); // 왼쪽 방향키 누름
  delay(random(60, 100));
  Keyboard.release(KEY_LEFT_ARROW); // 왼족 방향키 땜
  delay(random(100, 150));

  Seeker(); // 시커1
  Seeker(); // 시커2

  Keyboard.press(KEY_HOME); // 핑크 스커드 누름
  delay(random(40, 60));
  Keyboard.release(KEY_HOME); // 핑크 스커드 땜
  delay(random(590, 610));

  // 더블점프 + 시커 시작 3
  
  Keyboard.press(KEY_LEFT_ALT); // 점프 누름
  delay(random(40, 60));
  Keyboard.release(KEY_LEFT_ALT); // 점프 땜
  delay(random(40, 80));
  
  Keyboard.press('c'); // 더블점프 누름
  delay(random(40, 60));
  Keyboard.release('c'); // 더블점프 땜
  delay(random(190, 210));

  Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
  delay(random(40, 60));
  Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
  delay(random(650, 700));

  // 더블점프 + 시커 끝 3

  Seeker(); // 시커4
  
  randomSkill();

  // 더블점프 + 시커 시작 6
  
  Keyboard.press(KEY_LEFT_ALT); // 점프 누름
  delay(random(40, 60));
  Keyboard.release(KEY_LEFT_ALT); // 점프 땜
  delay(random(40, 80));
  
  Keyboard.press('c'); // 더블점프 누름
  delay(random(40, 60));
  Keyboard.release('c'); // 더블점프 땜
  delay(random(190, 210));

  Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
  delay(random(40, 60));
  Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
  delay(random(650, 700));

  // 더블점프 + 시커 끝 6

  Keyboard.press(KEY_HOME); // 핑크 스커드 누름
  delay(random(40, 60));
  Keyboard.release(KEY_HOME); // 핑크 스커드 땜
  delay(random(590, 610));

  // 더블점프 + 시커 시작 7
  
  Keyboard.press(KEY_LEFT_ALT); // 점프 누름
  delay(random(40, 60));
  Keyboard.release(KEY_LEFT_ALT); // 점프 땜
  delay(random(40, 80));
  
  Keyboard.press('c'); // 더블점프 누름
  delay(random(40, 60));
  Keyboard.release('c'); // 더블점프 땜
  delay(random(190, 210));

  Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
  delay(random(40, 60));
  Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
  delay(random(650, 700));

  // 더블점프 + 시커 끝 7

  Seeker(); //시커8

  Keyboard.press(KEY_RIGHT_ARROW); // 오른쪽 방향키 누름
  delay(random(60, 100));
  Keyboard.release(KEY_RIGHT_ARROW); // 오른쪽 방향키 땜
  delay(random(90, 110));
  
  buff();


  Keyboard.press(KEY_HOME); // 핑크 스커드 누름
  delay(random(40, 60));
  Keyboard.release(KEY_HOME); // 핑크 스커드 땜
  delay(random(590, 610));

  // 더블점프 + 시커 시작 1
  
  Keyboard.press(KEY_LEFT_ALT); // 점프 누름
  delay(random(40, 60));
  Keyboard.release(KEY_LEFT_ALT); // 점프 땜
  delay(random(40, 80));
  
  Keyboard.press('c'); // 더블점프 누름
  delay(random(40, 60));
  Keyboard.release('c'); // 더블점프 땜
  delay(random(190, 210));

  Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
  delay(random(40, 60));
  Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
  delay(random(650, 700));

  // 더블점프 + 시커 끝 1

  Seeker(); // 시커2

  // 더블점프 + 시커 시작 3
  
  Keyboard.press(KEY_LEFT_ALT); // 점프 누름
  delay(random(40, 60));
  Keyboard.release(KEY_LEFT_ALT); // 점프 땜
  delay(random(40, 80));
  
  Keyboard.press('c'); // 더블점프 누름
  delay(random(40, 60));
  Keyboard.release('c'); // 더블점프 땜
  delay(random(190, 210));

  Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
  delay(random(40, 60));
  Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
  delay(random(650, 700));

  // 더블점프 + 시커 끝 3

  Keyboard.press(KEY_HOME); // 핑크 스커드 누름
  delay(random(40, 60));
  Keyboard.release(KEY_HOME); // 핑크 스커드 땜
  delay(random(590, 610));

  // 더블점프 + 시커 시작 4
  
  Keyboard.press(KEY_LEFT_ALT); // 점프 누름
  delay(random(40, 60));
  Keyboard.release(KEY_LEFT_ALT); // 점프 땜
  delay(random(40, 80));
  
  Keyboard.press('c'); // 더블점프 누름
  delay(random(40, 60));
  Keyboard.release('c'); // 더블점프 땜
  delay(random(190, 210));

  Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
  delay(random(40, 60));
  Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
  delay(random(650, 700));

  // 더블점프 + 시커 끝 4

  Keyboard.press(KEY_LEFT_ARROW); // 왼쪽방향키 누름
  delay(random(40, 60));
  Keyboard.release(KEY_LEFT_ARROW); // 왼족 방향키 땜
  delay(random(90, 110));
  

  Keyboard.releaseAll(); //모든 키보드를 초기화합니다
}

void randomSkill() {
  randomNum = random(6);
  if (randomNum == 1)
  {
    Keyboard.press('d'); // 페투치아 누름
    delay(random(40, 60));
    Keyboard.release('d'); // 페투치아 땜
    delay(random(1050, 1100));
  }
  else if (randomNum == 2)
  {
    Keyboard.press(KEY_DOWN_ARROW); // 아래 방향키 누름
    delay(random(100, 200));
    Keyboard.press(KEY_LEFT_SHIFT); // 쉬프트 누름
    delay(random(190, 210));
    Keyboard.releaseAll(); //모든 키보드를 초기화합니다
    delay(random(850, 900));
  }
  else if (randomNum == 3)
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
  randomNum = random(3);
  if (randomNum == 1)
  {
    delay(random(2500, 3500));
  }
  else
  {
    Keyboard.press('5'); // 매크로 버프 누름
    delay(random(50, 150));
    Keyboard.release('5'); // 매크로 버프 땜
    delay(random(2500, 3500));
  }
}

void dice() {
  randomNum = random(3);
  if (randomNum == 1)
  {
    delay(random(2500, 3500));
  }
  else
  {
    Keyboard.press('6'); // 매크로 버프 누름
    delay(random(50, 150));
    Keyboard.release('6'); // 매크로 버프 땜
    delay(random(2500, 3500));
  }
}

void Seeker() {
  randomNum = random(3);
  if (randomNum == 1)
  {
    Keyboard.press(KEY_LEFT_ALT); // 점프 누름
    delay(random(40, 60));
    Keyboard.release(KEY_LEFT_ALT); // 점프 땜
    delay(random(40, 80));
  
    Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
    delay(random(40, 60));
    Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
    delay(random(650, 700));
  }
  else
  {
    Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
    delay(random(40, 60));
    Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
    delay(random(650, 700));
  }
}


void meso() {
  
}
