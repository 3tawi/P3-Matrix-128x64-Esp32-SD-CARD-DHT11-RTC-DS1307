/*
 * Adapted by 3tawi
 * Aurora: https://github.com/pixelmatix/aurora
 * Copyright (c) 2014 Jason Coon
 *
 * http://www.stefan-petrick.de/wordpress_beta
 * Copyright (c) 2014 Stefan Petrick
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef ClockPatterns_H
#define ClockPatterns_H

class ClockPatterns : public Playlist {
  private:
  const int CENTRE_X = 64;
  const int CENTRE_Y = 32;
  public:
    typedef void (ClockPatterns::*ClockPatternFunctionPointer)(void);
    ClockPatternFunctionPointer currentItem;
    static const int PATTERN_COUNT = 26;
    ClockPatternFunctionPointer shuffledItems[PATTERN_COUNT];
    ClockPatternFunctionPointer items[PATTERN_COUNT] = {
      &ClockPatterns::drawClock0,
      &ClockPatterns::drawClock1,
      &ClockPatterns::drawClock2,
      &ClockPatterns::drawClock3,
      &ClockPatterns::drawClock4,
      &ClockPatterns::drawClock5,
      &ClockPatterns::drawClock6,
      &ClockPatterns::drawClock7,
      &ClockPatterns::drawClock8,
      &ClockPatterns::drawClock9,
      &ClockPatterns::drawClock10,
      &ClockPatterns::drawClock11,
      &ClockPatterns::drawClock12,
      &ClockPatterns::drawClock13,
      &ClockPatterns::drawClock14,
      &ClockPatterns::drawClock15,
      &ClockPatterns::drawClock16,
      &ClockPatterns::drawClock17,
      &ClockPatterns::drawClock18,
      &ClockPatterns::drawClock19,
      &ClockPatterns::drawClock20,
      &ClockPatterns::drawClock21,
      &ClockPatterns::drawClock22,
      &ClockPatterns::drawClock23,
      &ClockPatterns::drawClock24,
      &ClockPatterns::drawClock25
    };
    
    void drawClock0() {
      clear();
      noise_y += 6000;
      readtime();
      drawHMTime0(25);
      drawMesg(textmsg, GPFont16x16, 16, 2);
      show();
    }
    void drawClock1() {
      clear();
      noise_y += 6000;
      readtime();
      drawHMTime0(5);
      drawMesg(textmsg, GPFont16x16, 16, 46);
      show();
    }
    void drawClock2() {
      clear();
      noise_y += 6000;
      readtime();
      drawHMTime1(25);
      drawMesg1(textmsg, GPFont16x16, 16, 2);
      show();
    }
    void drawClock3() {
      clear();
      noise_y += 6000;
      readtime();
      drawHMTime1(5);
      drawMesg1(textmsg, GPFont16x16, 16, 46);
      show();
    }
    void drawClock4() {
      clear();
      readtime();
      drawHMTime1(25);
      drawMesg(textmsg, GPFont16x16, 16, 2);
      show();
    }
    void drawClock5() {
      clear();
      readtime();
      drawHMTime1(5);
      drawMesg(textmsg, GPFont16x16, 16, 46);
      show();
    }
    void drawClock6() {
      clear();
      readtime();
      drawclockflp0(0,0);
      drawclockcer(64, 32, 56, 8, 2);
      drawclockdot(64, 32, 60);
      drawtimeflp(64, 32, 54, 2);
      readtime();
      show();
    }
    void drawClock7() {
      clear();
      readtime();
      drawclockflp0(-10,5);
      drawclockdot(54, 37, 36);
      drawtimeflp(54, 37, 52, 2);
      drawMesg(textmsg, GPFont8x8, 8, 2);
      drawTemp(0);
      show();
    }
    void drawClock8() {
      clear();
      readtime();
      drawclockflp0(10,5);
      drawclockdot(74, 37, 36);
      drawtimeflp(74, 37, 52, 2);
      drawMesg(textmsg, GPFont8x8, 8, 2);
      drawTemp(1);
      show();
    }
    void drawClock9() {
      clear();
      readtime();
      drawclockflp1();
      drawclockdot(64, 32, 50);
      drawtimeflp(64, 32, 54, 2);
      show();
    }
    void drawClock10() {
      clear();
      readtime();
      drawclock1();
      drawclockdot(64, 32, 50);
      drawtime(64, 32, 54, 2);
      show();
    }
    void drawClock11() {
      clear();
      readtime();
      drawclock0(-10,5);
      drawclockdot(54, 37, 36);
      drawtime(54, 37, 52, 2);
      drawMesg(textmsg, GPFont8x8, 8, 2);
      drawTemp(0);
      show();
    }
    void drawClock12() {
      clear();
      readtime();
      drawclock0(10,5);
      drawclockdot(74, 37, 36);
      drawtime(74, 37, 52, 2);
      drawMesg(textmsg, GPFont8x8, 8, 2);
      drawTemp(1);
      show();
    }
    void drawClock13() {
      clear();
      readtime();
      drawclock0(0,0);
      drawclockcer(64, 32, 60, 1, 2);
      drawclockdot(64, 32, 60);
      drawtime(64, 32, 54, 2);
      show();
    }
    void drawClock14() {
      clear();
      readtime();
      drawclockflp0(-10,5);
      drawclockdot(54, 37, 36);
      drawtimeflp(54, 37, 52, 2);
      drawMesg1(textmsg, GPFont8x8, 8, 2);
      drawTemp(0);
      show();
    }
    void drawClock15() {
      clear();
      readtime();
      drawclockflp0(10,5);
      drawclockdot(74, 37, 36);
      drawtimeflp(74, 37, 52, 2);
      drawMesg1(textmsg, GPFont8x8, 8, 2);
      drawTemp(1);
      show();
    }
    void drawClock16() {
      clear();
      readtime();
      drawclock0(-10,5);
      drawclockdot(54, 37, 36);
      drawtime(54, 37, 52, 2);
      drawMesg1(textmsg, GPFont8x8, 8, 2);
      drawTemp(0);
      show();
    }
    void drawClock17() {
      clear();
      readtime();
      drawclock0(10,5);
      drawclockdot(74, 37, 36);
      drawtime(74, 37, 52, 2);
      drawMesg1(textmsg, GPFont8x8, 8, 2);
      drawTemp(1);
      show();
    }
    void drawClock18() {
      clear();
      readtime();
      drawHMTime1(14);
      drawMesg(textmsg, GPFont8x8, 8, 1);
      drawDat(0);
      show();
    }
    void drawClock19() {
      clear();
      readtime();
      drawHMTime1(14);
      drawMesg(textmsg, GPFont8x8, 8, 55);
      drawDat(1);
      show();
    }
    void drawClock20() {
      clear();
      noise_y += 6000;
      readtime();
      drawHMTime0(14);
      drawMesg(textmsg, GPFont8x8, 8, 1);
      drawDat(0);
      show();
    }
    void drawClock21() {
      clear();
      noise_y += 6000;
      readtime();
      drawHMTime0(14);
      drawMesg(textmsg, GPFont8x8, 8, 55);
      drawDat(1);
      show();
    }
    void drawClock22() {
      clear();
      readtime();
      drawHMTime2(14);
      drawtemphumi(0);
      drawDat(1);
      show();
    }
    void drawClock23() {
      clear();
      readtime();
      drawHMTime2(14);
      drawtemphumi(1);
      drawDat(0);
      show();
    }
    void drawClock24() {
      clear();
      noise_y += 6000;
      readtime();
      drawHMTime0(14);
      drawtemphumi(0);
      drawDat(1);
      show();
    }
    void drawClock25() {
      clear();
      noise_y += 6000;
      readtime();
      drawHMTime0(14);
      drawtemphumi(1);
      drawDat(0);
      show();
    }

    void readtime() {
      if(millis() - lastTim >= 1000) {
        co0 = random(0, 91);
        flasher = !flasher;
        lastTim = millis();
      }
      if (NewRTCm != rtc.getMinute()) {
        effects.redtemphumi();
        flashSe = !flashSe;
        co1 = random(0, 91);
        NewRTCm = rtc.getMinute();
      }
    }
    
void drawHMTime0(int yy) {
     String text = Mode24h ? rtc.getTime("%H;%M") : rtc.getTime("%I;%M");
     effects.setFont(NuFont); 
     effects.setCursor(6, yy);
     effects.printStr(text);
     effects.setFont(GPFont8x9); 
     text = Mode24h ? " " : rtc.getAmPm();
     effects.setCursor(58, yy-1);
     effects.print(text, co0+12);
     effects.setFont(GPFont16x16B); 
     text = rtc.getTime("%S");
     effects.setCursor(50, yy+9);
     effects.print(text, co0+6);
     effects.setCursor(58, yy+23);
     text = flasher ? ":" : "";
     effects.print(text, co0);
     int xx = rtc.getSecond() * 2;
     xx = flashSe ? xx+4 : 123-xx;
     effects.fillEllipse(xx, yy-3, 4, 2, MyColor[co0]);
    }
    
void drawHMTime1(int yy) {
     String text = Mode24h ? rtc.getTime("%H;%M") : rtc.getTime("%I;%M");
     effects.setFont(NuFont); 
     effects.setCursor(6, yy);
     effects.print(text, co1);
     effects.setFont(GPFont8x9); 
     text = Mode24h ? " " : rtc.getAmPm();
     effects.setCursor(58, yy-1);
     effects.print(text, co0+12);
     effects.setFont(GPFont16x16B); 
     text = rtc.getTime("%S");
     effects.setCursor(50, yy+9);
     effects.print(text, co0+6);
     effects.setCursor(58, yy+23);
     text = flasher ? ":" : "";
     effects.print(text, co0);
     int xx = rtc.getSecond() * 2;
     xx = flashSe ? xx+4 : 123-xx;
     effects.fillEllipse(xx, yy-3, 4, 2, MyColor[co0]);
    }
    
void drawHMTime2(int yy) {
     effects.setFont(NuFont); 
     String text = Mode24h ? rtc.getTime("%H") : rtc.getTime("%I");
     effects.setCursor(-2, yy);
     effects.printStr(text);
     text = rtc.getTime("%M");
     effects.setCursor(51, yy);
     effects.printStr(text);
     effects.setFont(GPFont16x16); 
     text = Mode24h ? " " : rtc.getAmPm();
     effects.setCursor(96, yy);
     effects.print(text, co1);
     text = rtc.getTime("%S");
     effects.setCursor(97, yy+24);
     effects.print(text, co0);
     text = flasher ? ":" : "";
     effects.setCursor(41, yy+12);
     effects.print(text, co0);
     int xx = rtc.getSecond() * 2;
     xx = flashSe ? xx+4 : 123-xx;
     effects.fillEllipse(xx, yy-3, 4, 2, MyColor[co0]);
    }

void drawMesg(String text, uint8_t* font_gp, int len, int ym) {
  uint16_t text_length = text.length();
  effects.setFont(font_gp); 
  effects.setCursor(xps, ym);
  effects.print(text, co1);
  xps -= sp1;
  if (xps < -(text_length * len)) {
    effects.getmesg();
  }
}

void drawMesg1(String text, uint8_t* font_gp, int len, int ym) {
  uint16_t text_length = text.length();
  effects.setFont(font_gp); 
  effects.setCursor(xps, ym);
  effects.printStr(text);
  xps -= sp1;
  if (xps < -(text_length * len)) {
    effects.getmesg();
  }
}

void drawTemp(int sw) {
      switch(sw) {
        case 0 :
        effects.setFont(GPFont8x8);
        text = rtc.getAmPm();
        effects.setCursor(2, 13);
        effects.print(text, co1);
        text = rtc.getTime("%S");
        effects.setCursor(2, 56);
        effects.print(text, co0);
        text = (int)NewTemp;
        text += (char)127;
        effects.setCursor(103, 13);
        effects.print(text, co1);
        text = (int)NewHumi;
        text += "%";
        effects.setCursor(103, 56);
        effects.print(text, co1);
        break;
        case 1 :
        effects.setFont(GPFont8x8);
        text = rtc.getAmPm();
        effects.setCursor(110, 13);
        effects.print(text, co1);
        text = rtc.getTime("%S");
        effects.setCursor(110, 56);
        effects.print(text, co0);
        text = (int)NewTemp;
        text += (char)127;
        effects.setCursor(2, 13);
        effects.print(text, co1);
        text = (int)NewHumi;
        text += "%";
        effects.setCursor(2, 56);
        effects.print(text, co1);
        break;
  }
}
void drawDat(int swi) {
      effects.setFont(GPFont8x8);
      text = rtc.getTime("%a %F");
      int xx = (128 - (text.length() * 8)) / 2;
      switch(swi) {
        case 0 :
        effects.setCursor(xx, 56);
        effects.print(text, co1);
        break;
        case 1 :
        effects.setCursor(xx, 1);
        effects.print(text, co1);
        break;
      }
}
void drawtemphumi(int swi) {
      effects.setFont(GPFont8x8);
      text = NewTemp;
      text += (char)127;
      text += " - ";
      text += NewHumi;
      text += "%";
      int xx = (128 - (text.length() * 8)) / 2;
      switch(swi) {
        case 0 :
        effects.setCursor(xx, 56);
        effects.print(text, co1);
        break;
        case 1 :
        effects.setCursor(xx, 1);
        effects.print(text, co1);
        break;
      }
}
    
void drawclock0(int x0, int y0) {
      int x1[12] = {60, 85, 102, 109, 103, 84, 59, 32, 15, 9, 16, 37};
      int y1[12] = {6, 9, 19, 29, 40, 50, 53, 50, 40, 30, 19, 9};
      effects.setFont(GPFont8x5);
      for (int i = 0; i < 12; i++) {
        effects.setCursor(x1[i]+x0,y1[i]+y0);
        text = (char)(i+48);
        effects.print(text, (co0+i*5));
      }
}
    
void drawclock1() {
      int x1[12] = {60, 90, 112, 118, 112, 91, 59, 27, 5, 0, 4, 28};
      int y1[12] = {0, 1, 12, 29, 47, 58, 59, 58, 47, 30, 12, 1};
      effects.setFont(GPFont8x5);
      for (int i = 0; i < 12; i++) {
        effects.setCursor(x1[i],y1[i]);
        text = (char)(i+48);
        effects.print(text, (co0+i*5));
      }
}
  
void drawclockflp0(int x0, int y0) {
      int x1[12] = {60, 33, 14, 9, 14, 34, 59, 85, 103, 109, 102, 85};
      int y1[12] = {6, 9, 19, 30, 42, 50, 54, 50, 40, 29, 19, 9};
      effects.setFont(GPFont8x5);
      for (int i = 0; i < 12; i++) {
        effects.setCursor(x1[i]+x0,y1[i]+y0);
        text = (char)(i+48);
        effects.print(text, (co0+i*5));
      }
}
  
void drawclockflp1() {
      int x1[12] = {60, 28, 4, 0, 4, 27, 59, 91, 113, 118, 115, 94};
      int y1[12] = {0, 1, 12, 30, 47, 58, 59, 58, 47, 29, 12, 1};
      effects.setFont(GPFont8x5);
      for (int i = 0; i < 12; i++) {
        effects.setCursor(x1[i],y1[i]);
        text = (char)(i+48);
        effects.print(text, (co0+i*5));
      }
}
    
void drawclockcer(int cx, int cy, int w, int z, int t) {
      for (int i = 0; i < z; i++) {
        uint16_t color = MyColor[(co0+i*5)%92];
        effects.ellipse(cx, cy, w+i, (w+i)/t, color);
      }
}
    
void drawclockdot(int cx, int cy, int w) {
      float radians, angle;
      for (int i = 0; i < 60; i+=5) {
        uint16_t color = MyColor[(co1+i*5)%92];
        angle =  360 - i * 6;
        radians = radians(angle);
        int x0 = cx + w * sin(radians);
        int y0 = cy + w/2 * cos(radians);
        effects.fillCircle(x0, y0, 1, color);
     }
}

void drawHMS(float angle, int x0, int y0, int w, int t, int c0, int c1, int z1) {
      int x[3];
      int y[3];
      float radians = radians(angle);
      x[0] = x0 + w * sin(radians);
      y[0] = y0 + w/t * cos(radians);
      radians = radians(angle+z1);
      x[1] = x0 + 6 * sin(radians);
      y[1] = y0 + 6/t * cos(radians);
      radians = radians(angle-z1);
      x[2] = x0 + 6 * sin(radians);
      y[2] = y0 + 6/t * cos(radians);
      effects.fillTriangle(x0, y0, x[0], y[0], x[1], y[1], MyColor[c0]);
      effects.fillTriangle(x0, y0, x[0], y[0], x[2], y[2], MyColor[c0]);
      effects.drawLine(x[0], y[0], x[1], y[1], MyColor[c1]);
      effects.drawLine(x[0], y[0], x[2], y[2], MyColor[c1]);
}

    void drawtime(int cx, int cy, int w, int t) {
      uint8_t second = rtc.getSecond();
      uint8_t minute = rtc.getMinute();
      uint8_t hour = rtc.getHour();
      if (hour > 12) hour -= 12;
      float angle = 180 - (30 * hour) - (minute / 2);
      drawHMS(angle, cx, cy, w-20, t, 0, 0, 30);
      angle = 180 - (6 * minute);
      drawHMS(angle, cx, cy, w-10, t, 32, 34, 25);
      angle =  180 - (second * 6);
      drawHMS(angle, cx, cy, w, t, co0, co0, 20);
      effects.fillCircle(cx, cy, 3, MyColor[co1]);
      effects.fillCircle(cx, cy, 2, MyColor[co0]);
    }

    void drawtimeflp(int cx, int cy, int w, int t) {
      uint8_t second = rtc.getSecond();
      uint8_t minute = rtc.getMinute();
      uint8_t hour = rtc.getHour();
      if (hour > 12) hour -= 12;
      float angle = 180 + (30 * hour) + (minute / 2);
      drawHMS(angle, cx, cy, w-20, t, 0, 0, 30);
      angle = 180 + (6 * minute);
      drawHMS(angle, cx, cy, w-10, t, 32, 34, 25);
      angle =  180 + (second * 6);
      drawHMS(angle, cx, cy, w, t, co0, co0, 20);
      effects.fillCircle(cx, cy, 3, MyColor[co1]);
      effects.fillCircle(cx, cy, 2, MyColor[co0]);
    }

    int currentIndex = 0;

    int getCurrentIndex() {
      return currentIndex;
    }

    ClockPatterns() {
      this->currentItem = items[currentIndex];

      // add the items to the shuffledItems array
      for (int a = 0; a < PATTERN_COUNT; a++) {
        shuffledItems[a] = items[a];
      }

      shuffleItems();
    }

    void moveRandom(int step) {
      currentIndex += step;

      if (currentIndex >= PATTERN_COUNT) currentIndex = 0;
      else if (currentIndex < 0) currentIndex = PATTERN_COUNT - 1;


      currentItem = shuffledItems[currentIndex];
    }

    void shuffleItems() {
      for (int a = 0; a < PATTERN_COUNT; a++)
      {
        int r = random(a, PATTERN_COUNT);
        ClockPatternFunctionPointer temp = shuffledItems[a];
        shuffledItems[a] = shuffledItems[r];
        shuffledItems[r] = temp;
      }
    }

    char* Drawable::name = (char *)"Clock Patterns";

    void move(int step) {
      moveTo(currentIndex + step);
    }

    void moveTo(int index) {
      currentIndex = index;

      if (currentIndex >= PATTERN_COUNT) currentIndex = 0;
      else if (currentIndex < 0) currentIndex = PATTERN_COUNT - 1;


      currentItem = items[currentIndex];
      Serial.println(currentIndex);
    }

    unsigned int drawFrame() {
      (this->*currentItem)();
      return 0;
    }
    
    void listClockPatterns() {
      Serial.println(F("{"));
      Serial.print(F("  \"count\": "));
      Serial.print(PATTERN_COUNT);
      Serial.println(",");
      Serial.println(F("  \"results\": ["));

      for (int i = 0; i < PATTERN_COUNT; i++) {
        Serial.print(F("    \""));
        Serial.print(i);
        if (i == PATTERN_COUNT - 1)
          Serial.println(F("\""));
        else
          Serial.println(F("\","));
      }

      Serial.println("  ]");
      Serial.println("}");
    }

    bool setClockPattern(String name) {
      for (int i = 0; i < PATTERN_COUNT; i++) {
        if (name.toInt() == i) {
          moveTo(i);
          return true;
        }
      }

      return false;
    }

    bool setClockPattern(int index) {
      if (index >= PATTERN_COUNT || index < 0)
        return false;

      moveTo(index);

      return true;
    }
};

#endif
