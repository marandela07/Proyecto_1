/************************ Adafruit IO Config *******************************/

// visit io.adafruit.com if you need to create an account,
// or if you need your Adafruit IO key.
#define IO_USERNAME  "marandela07"
#define IO_KEY       "aio_ZTNq17TFBMBZvBOp61jdRxgZZVr5"

/******************************* WIFI **************************************/

#define WIFI_SSID "Blossom"
#define WIFI_PASS "ohpv8146"

#include "AdafruitIO_WiFi.h"

AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);
