/*  ESP32 template.

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// FreeRTOS
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "freertos/queue.h"
// ESP
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event_loop.h"
#include "esp_err.h"
#include "esp_log.h"
// Peripherals
#include "driver/gpio.h"
// Storage
#include "nvs_flash.h"
#include "esp_spiffs.h"
// Protocols
#include "lwip/err.h"
#include "lwip/sys.h"
#include "lwip/sockets.h"
#include "lwip/dns.h"
#include "lwip/netdb.h"
#include "mqtt_client.h"
// Menuconfig
#include "sdkconfig.h"
// Outros
#include "main.h"


/**
 * main aplication.
 */
void app_main(void)
{
    int i = 0;
    while (1) {
        printf("[%d] Hello world!\n", i);
        i++;
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
}