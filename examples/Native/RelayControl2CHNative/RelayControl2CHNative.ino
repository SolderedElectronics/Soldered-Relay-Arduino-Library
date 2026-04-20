/**
 **************************************************
 *
 * @file        RelayControl2CHNative.ino
 * @brief       Relay control example to show how to control 2 channel relay board.
 *              This example uses Dasduino Core, but you can use any other Dasduino. 
 *              Just make sure you have correctly defined the pins you connected the relays to.
 *
 *              Product: solde.red/333023
 *
 * @authors     Robert Peric @ soldered.com
 ***************************************************/

// Connecting diagram
// Breakout      Dasduino Core
// |-------------|
// IN1-----------D9
// IN2-----------D10
// GND-----------GND
// VCC-----------5V

// Include our CH_Reley library
#include "Relays-SOLDERED.h"

// Dasduino pins on which relays are connected
#define RELAY1_PIN 9
#define RELAY2_PIN 10

// Here is needed to specify Dasduino pins on which relays are connected
CH_Relay Relay(RELAY1_PIN, RELAY2_PIN);

void setup()
{
    // Initialize relay library
    Relay.begin(); 
}

void loop()
{
    // Turn on relay 1
    Relay.relayControl(CHANNEL1, HIGH);
    Serial.println("Current configured state of Channel 1 is: "+String(Relay.getChannelState(CHANNEL1)));
    delay(1500);

    // Turn off relay 1
    Relay.relayControl(CHANNEL1, LOW);
    Serial.println("Current configured state of Channel 1 is: "+String(Relay.getChannelState(CHANNEL1)));
    delay(1500);

    // Turn on relay 2
    Relay.relayControl(CHANNEL2, HIGH);
    Serial.println("Current configured state of Channel 2 is: "+String(Relay.getChannelState(CHANNEL2)));
    delay(1500);

    // Turn off relay 2
    Relay.relayControl(CHANNEL2, LOW);
    Serial.println("Current configured state of Channel 2 is: "+String(Relay.getChannelState(CHANNEL2)));
    delay(1500);
}
