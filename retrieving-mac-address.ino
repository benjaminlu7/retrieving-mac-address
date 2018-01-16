/*
================================================================================================
Retrieving MAC Address - retrieving-mac-address.ino
================================================================================================
This project deals with Retreving a Mac Address locally.

@package        Retrieving IP Address
@copyright      Copyright (C) 2018. Benjamin Lu
@license        GNU General Public License v2 or later (http://www.gnu.org/licenses/gpl-2.0.html)
@author         Benjamin Lu (https://www.benjlu.com/)
================================================================================================
*/

/*
================================================================================================
Table of Content
================================================================================================
 1.0 - Required Files
 2.0 - Setup
 3.0 - Loop
================================================================================================
*/

/*
================================================================================================
 1.0 - Required Files
================================================================================================
*/
#include <SPI.h>
#include <Ethernet.h>

/*
================================================================================================
 2.0 - Setup
================================================================================================
*/
void setup() {
  Serial.begin(9600);

  if (Ethernet.begin() == 0) {
    Serial.println("Failed to Retrieve MAC Address");
  }
  delay(2000);
  Serial.println("Retrieving MAC Address...");
  delay(2000);
  byte *mac = Ethernet.localMAC();
  
  Serial.print(mac[0],HEX);
  Serial.print(":");
  Serial.print(mac[1],HEX);
  Serial.print(":");
  Serial.print(mac[2],HEX);
  Serial.print(":");
  Serial.print(mac[3],HEX);
  Serial.print(":");
  Serial.print(mac[4],HEX);
  Serial.print(":");
  Serial.println(mac[5],HEX);
}

/*
================================================================================================
 3.0 - Loop
================================================================================================
*/
void loop() {
  // The loop is required but does not need to be used.
}

