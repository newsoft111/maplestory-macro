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

  for (;;) {
    int NumberArray[] = {0,1,2,3,4,5};

    int n = sizeof(NumberArray) / sizeof(NumberArray[0]);
    
    for (int i = 0; i < n; i++)
    {
      int j = random(0, n - i);
      int t = NumberArray[i];
      NumberArray[i] = NumberArray[j];
      NumberArray[j] = t;
    }

    for(int i = 0; i < n; i++){
      Keyboard.releaseAll(); //모든 키보드를 초기화합니다
     
      //오른쪽부터
      
      Keyboard.press(KEY_LEFT_ARROW); // 오른쪽 방향키 누름
      delay(random(100, 150));
          
      attack();
      attack();
      attack();
      attack();
  
      Keyboard.release(KEY_LEFT_ARROW); // 오른쪽 방향키 땜
      delay(random(50, 100));
  
      Keyboard.press(KEY_RIGHT_ARROW); // 왼쪽 방향키 누름
      delay(random(50, 100));
      Keyboard.release(KEY_RIGHT_ARROW); // 왼쪽 방향키 땜
      delay(random(200, 250));

      Keyboard.press(KEY_LEFT_ALT); // 점프 누름
      delay(random(40, 60));
      Keyboard.release(KEY_LEFT_ALT); // 점프 땜
      delay(random(60, 100));
      
      Keyboard.press(KEY_PAGE_DOWN); // 로프 누름
      delay(random(50, 100));
      Keyboard.release(KEY_PAGE_DOWN); // 로프 땜
      delay(random(700, 720));

  
      Keyboard.press(KEY_RIGHT_ARROW); // 왼쪽 방향키 누름
      delay(random(50, 70));

      
      attack();
      attack();
      
      randomSkill(NumberArray[i]);

      Keyboard.press(KEY_HOME);
      delay(random(50, 100));
      Keyboard.release(KEY_HOME);
      delay(random(500, 550));

      attack();
      attack();
  
      delay(random(1000,1100));
  
    
      Keyboard.releaseAll(); //모든 키보드를 
    }
  }
}

void randomSkill(int randomNum) {
  Keyboard.release(KEY_RIGHT_ARROW); // 왼쪽 방향키 땜
  delay(random(100, 150));
     
  if (randomNum == 0)
  {
    Keyboard.press('d'); // 페투치아 누름
    delay(random(40, 60));
    Keyboard.release('d'); // 페투치아 땜
    delay(random(1050, 1100));
  }
  else if (randomNum == 1)
  {
    Keyboard.press(KEY_DOWN_ARROW); // 아래 방향키 누름
    delay(random(100, 200));
    Keyboard.press(KEY_LEFT_SHIFT); // 쉬프트 누름
    delay(random(190, 210));
    Keyboard.releaseAll(); //모든 키보드를 초기화합니다
    delay(random(850, 900));
  }
  else if (randomNum == 2)
  {
    Keyboard.press('1'); // 노바 누름
    delay(random(40, 60));
    Keyboard.release('1'); // 노바 땜
    delay(random(900, 950));
  }
  else if (randomNum == 3)
  {
    Keyboard.press('3'); // 스포트라이트 누름
    delay(random(40, 60));
    Keyboard.release('3'); // 스포트라이트 땜
    delay(random(1200,1300));
  }
  else if (randomNum == 4)
  {
    delay(random(250, 350));
    Keyboard.press('6'); // 매크로 버프 누름
    delay(random(50, 150));
    Keyboard.release('6'); // 매크로 버프 땜
    delay(random(1100, 1200));
  }
  else if (randomNum == 5)
  {
    Keyboard.press(KEY_PAGE_UP); // 에버 누름
    delay(random(50, 100));
    Keyboard.release(KEY_PAGE_UP); // 에버 땜
    delay(random(900,1000));
  }

  Keyboard.press(KEY_RIGHT_ARROW); // 오른쪽 방향키 누름
  delay(random(50, 100));
}


void attack() {
  randomNum = random(3);
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
