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

void vTaskCopy(void *pvParameters)
{
    unsigned int cnt = 0;
    ESP_LOGI("vTaskCopy", "task started");
    for(;;) {
        cnt ++;
        ESP_LOGI("vTaskCopy", "runTime %d\tCPU_ID:%d", cnt, xPortGetCoreID());
        vTaskDelay(100/portTICK_PERIOD_MS);
    }
}


/**
 * main aplication.
 */
void app_main(void)
{
    xTaskCreatePinnedToCore (
            vTaskCopy,
            "vTaskCopy",
            4096,
            NULL,
            5,
            NULL,
            PRO_CPU_NUM
    );
    xTaskCreatePinnedToCore (
            vTaskCopy,
            "vTaskCopy",
            4096,
            NULL,
            5,
            NULL,
            APP_CPU_NUM
    );
    xTaskCreatePinnedToCore (
            vTaskCopy,
            "vTaskCopy",
            4096,
            NULL,
            5,
            NULL,
            tskNO_AFFINITY
    );
}