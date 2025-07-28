#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>

#define BAMBU_DEFAULT_AUTOSEND_TIME 60


#define NVS_NAMESPACE_API "api"
#define NVS_KEY_SPOOLMAN_URL "spoolmanUrl"
#define NVS_KEY_OCTOPRINT_ENABLED "octoEnabled"
#define NVS_KEY_OCTOPRINT_URL "octoUrl"
#define NVS_KEY_OCTOPRINT_TOKEN "octoToken"

#define NVS_NAMESPACE_BAMBU "bambu"
#define NVS_KEY_BAMBU_IP "bambuIp"
#define NVS_KEY_BAMBU_ACCESSCODE "bambuCode"
#define NVS_KEY_BAMBU_SERIAL "bambuSerial"
#define NVS_KEY_BAMBU_AUTOSEND_ENABLE "autosendEnable"
#define NVS_KEY_BAMBU_AUTOSEND_TIME "autosendTime"

#define NVS_NAMESPACE_SCALE "scale"
#define NVS_KEY_CALIBRATION "cal_value"
#define NVS_KEY_AUTOTARE "auto_tare"

#define BAMBU_USERNAME "bblp"


extern const uint8_t PN532_IRQ;
extern const uint8_t PN532_RESET;

extern const uint8_t LOADCELL_DOUT_PIN;
extern const uint8_t LOADCELL_SCK_PIN;
extern const uint8_t calVal_eepromAdress;
extern const uint16_t SCALE_LEVEL_WEIGHT;

extern const uint8_t TTP223_PIN;

extern const int8_t OLED_RESET;
extern const uint8_t SCREEN_ADDRESS;
extern const uint8_t SCREEN_WIDTH;
extern const uint8_t SCREEN_HEIGHT;
extern const uint8_t OLED_TOP_START;
extern const uint8_t OLED_TOP_END;
extern const uint8_t OLED_DATA_START;
extern const uint8_t OLED_DATA_END;

extern const char* apiUrl;
extern const uint8_t webserverPort;



extern const unsigned char wifi_on[];
extern const unsigned char wifi_off[];
extern const unsigned char cloud_on[];
extern const unsigned char cloud_off[];

extern const unsigned char icon_failed[];
extern const unsigned char icon_success[];
extern const unsigned char icon_transfer[];
extern const unsigned char icon_loading[];

extern uint8_t rfidTaskCore;
extern uint8_t rfidTaskPrio;

extern uint8_t rfidWriteTaskPrio;

extern uint8_t mqttTaskCore;
extern uint8_t mqttTaskPrio;

extern uint8_t scaleTaskCore;
extern uint8_t scaleTaskPrio;

extern uint16_t defaultScaleCalibrationValue;
#endif