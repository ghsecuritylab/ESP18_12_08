#ifndef CSRO_COMMON_H_
#define CSRO_COMMON_H_

#include "csro_config.h"

extern csro_system_info    sys_info;
extern csro_wifi_param     wifi_param;
extern csro_date_time      date_time;
extern csro_mqtt           mqtt;

void csro_system_init(void);
void csro_mqtt_task(void *pvParameters);
void csro_smartconfig_task(void *pvParameters);
void csro_system_set_status(csro_system_status status);
void csro_system_encrypt(void);

void csro_datetime_init(void);
void csro_datetime_print(void);
void csro_datetime_set(char *timeinfo);


void csro_alarm_add(uint8_t weekday_flag, uint16_t minutes, uint8_t action);
void csro_alarm_modify(uint8_t index, uint8_t weekday_flag, uint16_t minutes, uint8_t action);
void csro_alarm_delete(uint8_t index);
void csro_alarm_clear(void);

#endif
