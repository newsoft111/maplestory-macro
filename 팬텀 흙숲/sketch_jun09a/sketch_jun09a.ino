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

  for (int i=0;i<5;i++) {
    Keyboard.releaseAll(); //모든 키보드를 초기화합니다
   
    //오른쪽부터
    
    Keyboard.press(KEY_LEFT_ARROW); // 왼쪽 방향키 누름
    delay(random(50, 100));
    attack();
    attack();
    attack();
    Keyboard.release(KEY_LEFT_ARROW); // 왼쪽 방향키 땜
    delay(random(40, 90));
  
    randomSkill();

    Keyboard.press(KEY_LEFT_ARROW); // 왼쪽 방향키 누름
    delay(random(50, 100));
    attack();
    attack();
    attack();
    Keyboard.release(KEY_LEFT_ARROW); // 왼쪽 방향키 땜
    delay(random(100, 290));
  
    Keyboard.press(KEY_RIGHT_ARROW); // 오른쪽 방향키 누름
    delay(random(50, 100));
    attack();
    attack();
    attack();
    Keyboard.release(KEY_RIGHT_ARROW); // 오른쪽 방향키 땜
    delay(random(40, 90));
      
    randomSkill();

    Keyboard.press(KEY_RIGHT_ARROW); // 오른쪽 방향키 누름
    delay(random(50, 100));
    attack();
    attack();
    attack();
    Keyboard.release(KEY_RIGHT_ARROW); // 오른쪽 방향키 땜
    delay(random(100, 290));
  
    Keyboard.releaseAll(); //모든 키보드를 초기화합니다
  }
}

void randomSkill() {
  randomNum = random(5);
  if (randomNum == 0)
  {
    Keyboard.press('d'); // 슈라우드 입력
    delay(random(100, 150));
    Keyboard.release('d'); // 슈라우드 땜
    delay(random(450, 550));
  
    Keyboard.press(KEY_UP_ARROW); // 위 방향키 누름
    delay(random(150, 250));
    Keyboard.release(KEY_UP_ARROW); // 위 방향키 땜
    delay(random(100, 150));
  
    Keyboard.press('d'); // 슈라우드 입력
    delay(random(100, 200));
    Keyboard.release('d'); // 슈라우드 땜
    delay(random(100, 150));
    
    Keyboard.press('1'); // 로카피 누름
    delay(random(50, 100));
    Keyboard.release('1'); // 로카피 땜
    delay(random(1050, 1150));

    Keyboard.press(KEY_DOWN_ARROW); // 밑점
    delay(random(150, 250));
    Keyboard.press(KEY_LEFT_ALT);
    delay(random(20, 70));
    Keyboard.release(KEY_LEFT_ALT);
    delay(random(20, 50));
    Keyboard.release(KEY_DOWN_ARROW);
    delay(random(600, 750));
  }
  else if (randomNum == 1)
  {
    Keyboard.press('2'); // 블랙잭 누름
    delay(random(50, 100));
    Keyboard.release('2'); // 블랙잭 땜
    delay(random(1050, 1150));
  }
  else if (randomNum == 2)
  {
    Keyboard.press('d'); // 슈라우드 입력
    delay(random(100, 150));
    Keyboard.release('d'); // 슈라우드 땜
    delay(random(450, 550));
  
    Keyboard.press(KEY_UP_ARROW); // 위 방향키 누름
    delay(random(150, 250));
    Keyboard.release(KEY_UP_ARROW); // 위 방향키 땜
    delay(random(100, 150));
  
    Keyboard.press('d'); // 슈라우드 입력
    delay(random(100, 200));
    Keyboard.release('d'); // 슈라우드 땜
    delay(random(100, 150));
    
    Keyboard.press('3'); // 리부트 브레이크 누름
    delay(random(50, 100));
    Keyboard.release('3'); // 리부트 브레이크 누름
    delay(random(1050, 1150));

    Keyboard.press(KEY_DOWN_ARROW); // 밑점
    delay(random(150, 250));
    Keyboard.press(KEY_LEFT_ALT);
    delay(random(20, 70));
    Keyboard.release(KEY_LEFT_ALT);
    delay(random(20, 50));
    Keyboard.release(KEY_DOWN_ARROW);
    delay(random(600, 750));
  }
  else if (randomNum == 3)
  {
    Keyboard.press('4'); // 에르다샤워 누름
    delay(random(50, 100));
    Keyboard.release('4'); // 에르다샤워 땜
    delay(random(700, 800));
  }
  else
  {
    Keyboard.press(KEY_LEFT_ALT);
    delay(random(20, 70));
    Keyboard.release(KEY_LEFT_ALT);
    delay(random(200, 350));
    
    Keyboard.press(KEY_END); // 생츄 누름
    delay(random(50, 100));
    Keyboard.release(KEY_END); // 생츄 땜
    delay(random(800, 900));
  }
}


void attack() {
  randomNum = random(2);
  if (randomNum == 0)
  {
    Keyboard.press(KEY_LEFT_ALT); // 점프 누름
    delay(random(20, 70));
    Keyboard.release(KEY_LEFT_ALT); // 점프 땜
    delay(random(20, 50));

    Keyboard.press('c'); // 더블점프 누름
    delay(random(20, 50));
    Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
    delay(random(20, 70));
    
    Keyboard.release('c'); // 더플점프 땜
    delay(random(50, 150));
    Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
    delay(random(650, 750));
  }
  else
  {
    Keyboard.press(KEY_LEFT_ALT); // 점프 누름
    delay(random(20, 70));
    Keyboard.release(KEY_LEFT_ALT); // 점프 땜
    delay(random(20, 50));
    
    Keyboard.press('c'); // 더블점프 누름
    delay(random(20, 70));
    Keyboard.release('c'); // 더블점프 땜
    delay(random(20, 50));
  
    Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
    delay(random(50, 150));
    Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
    delay(random(650, 750));
  }
}

void leftAttack() {
  randomNum = random(2);
  if (randomNum == 0)
  {
    Keyboard.press(KEY_LEFT_ALT); // 점프 누름
    delay(random(50, 100));
    Keyboard.release(KEY_LEFT_ALT); // 점프 땜
    delay(random(50, 100));

    Keyboard.press('c'); // 더블점프 누름
    delay(random(590, 640));
    Keyboard.press(KEY_LEFT_ARROW); // 왼쪽 방향키 누름
    delay(random(50, 100));
    Keyboard.release(KEY_LEFT_ARROW); // 왼쪽 방향키 땜
    delay(random(40, 90));
    Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
    delay(random(50, 100));
    
    Keyboard.release('c'); // 더플점프 땜
    delay(random(50, 150));
    Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
    delay(random(650, 750));
  }
  else
  {
    Keyboard.press(KEY_LEFT_ALT); // 점프 누름
    delay(random(50, 100));
    Keyboard.release(KEY_LEFT_ALT); // 점프 땜
    delay(random(50, 100));
    
    Keyboard.press('c'); // 더블점프 누름
    delay(random(50, 100));
    Keyboard.release('c'); // 더블점프 땜
    delay(random(50, 100));

    Keyboard.press(KEY_LEFT_ARROW); // 왼쪽 방향키 누름
    delay(random(50, 100));
    Keyboard.release(KEY_LEFT_ARROW); // 왼쪽 방향키 땜
    delay(random(40, 90));
  
    Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
    delay(random(50, 150));
    Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
    delay(random(650, 750));
  }
}
