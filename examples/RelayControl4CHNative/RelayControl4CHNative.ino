/**
 **************************************************
 *
 * @file        RelayControl4CHNative.ino
 * @brief       Relay control example to show how to control 4 channel relay board
 *
 *              Product: solde.red/333022
 *
 * @authors     Karlo Leksic for soldered.com
 ***************************************************/

// Connecting diagram
// Breakout      Arduino
// |-------------|
// IN1-----------9
// IN2-----------10
// IN3-----------11
// IN4-----------12
// GND-----------GND
// VCC-----------5V

// Include our CH_Relay library
#include "Relay-SOLDERED.h"

#define RELAY1_PIN 9
#define RELAY2_PIN 10
#define RELAY3_PIN 11
#define RELAY4_PIN 12

// Here is needed to specify the pins on which relays are connected
CH_Relay Relay(RELAY1_PIN, RELAY2_PIN, RELAY3_PIN, RELAY4_PIN);

void setup()
{
    Relay.begin(); // Initialize relay
}

void loop()
{
    // Turn on relay 1
    Relay.relayControl(CHANNEL1, HIGH);
    delay(1500);

    // Turn off relay 1
    Relay.relayControl(CHANNEL1, LOW);
    delay(1500);

    // Turn on relay 2
    Relay.relayControl(CHANNEL2, HIGH);
    delay(1500);

    // Turn off relay 2
    Relay.relayControl(CHANNEL2, LOW);
    delay(1500);

    // Turn on relay 3
    Relay.relayControl(CHANNEL3, HIGH);
    delay(1500);

    // Turn off relay 3
    Relay.relayControl(CHANNEL3, LOW);
    delay(1500);

    // Turn on relay 4
    Relay.relayControl(CHANNEL4, HIGH);
    delay(1500);

    // Turn off relay 4
    Relay.relayControl(CHANNEL4, LOW);
    delay(1500);
}
