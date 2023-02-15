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
    int NumberArray[] = {0,1,2,3};

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
     
      //왼쪽부터
      Keyboard.press(KEY_RIGHT_ARROW); // 오른쪽 방향키 누름
      delay(random(50, 100));
      
      attack();
      attack();
      attack();
      attack();

      Keyboard.release(KEY_RIGHT_ARROW); // 오른쪽 방향키 땜
      delay(random(50, 100));

      Keyboard.press('d'); // 팬텀텔포 누름
      delay(random(50, 100));
      Keyboard.release('d'); // 팬텀텔포 땜
      delay(random(100, 150));   
      
      Keyboard.press(KEY_UP_ARROW); // 위 방향키 누름
      delay(random(50, 100));
      Keyboard.release(KEY_UP_ARROW); // 위 방향키 땜
      delay(random(200, 250));

      Keyboard.press(KEY_UP_ARROW); // 위 방향키 누름
      delay(random(50, 100));
      Keyboard.release(KEY_UP_ARROW); // 위 방향키 땜
      delay(random(200, 250));
  
      Keyboard.press('d'); // 팬텀텔포 누름
      delay(random(50, 100));
      Keyboard.release('d'); // 팬텀텔포 땜
      delay(random(100, 150));
      

      Keyboard.press(KEY_LEFT_ARROW); // 왼쪽 방향키 누름
      delay(random(100, 150));

      
      attack();
      attack();
      randomSkill(NumberArray[i]);
      attack();
      attack();

      Keyboard.release(KEY_LEFT_ARROW); // 왼쪽 방향키 땜
      delay(random(50, 100));
  
      Keyboard.press('d'); // 팬텀텔포 누름
      delay(random(50, 100));
      Keyboard.release('d'); // 팬텀텔포 땜
      delay(random(100, 150));   

      Keyboard.press(KEY_DOWN_ARROW); // 아래 방향키 누름
      delay(random(50, 100));
      Keyboard.release(KEY_DOWN_ARROW); // 아래 방향키 땜
      delay(random(200, 250));

      Keyboard.press(KEY_DOWN_ARROW); // 아래 방향키 누름
      delay(random(50, 100));
      Keyboard.release(KEY_DOWN_ARROW); // 아래 방향키 땜
      delay(random(200, 250));
  
      Keyboard.press('d'); // 팬텀텔포 누름
      delay(random(50, 100));
      Keyboard.release('d'); // 팬텀텔포 땜
      delay(random(100, 150));
  
    
      Keyboard.releaseAll(); //모든 키보드를 
    }
  }
}

void randomSkill(int randomNum) {
  if (randomNum == 0)
  {
    Keyboard.press('1'); // 로카피 누름
    delay(random(50, 100));
    Keyboard.release('1'); // 로카피 땜
    delay(random(950, 1050));
  }
  else if (randomNum == 1)
  {
    Keyboard.press('3'); // 리부트 브레이크 누름
    delay(random(50, 100));
    Keyboard.release('3'); // 리부트 브레이크 누름
    delay(random(1050, 1150));
  }
  else if (randomNum == 2)
  {
    delay(random(150, 200));
    Keyboard.press('2'); // 블랙잭 누름
    delay(random(50, 100));
    Keyboard.release('2'); // 블랙잭 땜
    delay(random(1050, 1150));
  }
  else if (randomNum == 3)
  {  
    Keyboard.press(KEY_END); // 생츄 누름
    delay(random(50, 100));
    Keyboard.release(KEY_END); // 생츄 땜
    delay(random(800, 900));
  }
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
    delay(random(150, 200));
  
    Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
    delay(random(40, 60));
    Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
    delay(random(450, 500));
  }
  else if (randomNum == 1)
  {
    Keyboard.press(KEY_LEFT_ALT); // 점프 누름
    delay(random(40, 60));
    Keyboard.release(KEY_LEFT_ALT); // 점프 땜
    delay(random(60, 100));

    Keyboard.press(KEY_LEFT_ALT); // 점프 누름
    delay(random(150, 200));
    Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
    delay(random(40, 60));
       
    Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
    delay(random(450, 500));
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
    delay(random(150, 200));
    Keyboard.press(KEY_LEFT_CTRL); // 시커 누름
    delay(random(40, 60));
       
    Keyboard.release(KEY_LEFT_ALT); // 점프 땜
    delay(random(60, 100));
    Keyboard.release(KEY_LEFT_CTRL); // 시커 땜
    delay(random(450, 500));
  }
}
