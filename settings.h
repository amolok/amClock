#ifndef __SETTINGS_H__
#define __SETTINGS_H__

/* PIN */
#define CLK 2 // SCL
#define DIO 3 // SDA
#define BTN 8

/* Settings */

struct tHHMM
{
  uint8_t Hour, Minute;
};
struct tInterleave
{
  tHHMM start, end;
};

struct sSettings
{
  tHHMM Day, Night;
  tInterleave Sleep;
  // tHHMM Sunrise, Sunset;
  // tHHMM Wakeup;
  // tHHMM Alarm;
};

// sSettings Settings;

#endif