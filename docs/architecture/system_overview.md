# H03D RocNet rendszer

## Cél

A rendszer egy akkumulátoros H0 modellvasút vezérlőrendszer.

## Fő komponensek

### RocRail szerver

- Raspberry Pi 3B+
- Debian 13
- RocNet protokoll

### Bridge Node

- ESP32-U32
- WiFi kapcsolat a RocRail felé
- BLE kapcsolat a mozdonyok felé

### Loco Node

- ESP32-C3 SuperMini
- BLE vezérlés
- Motorvezérlés
- Világítás

### Track Node

- ESP32-U32
- Hall szenzorok
- Váltók
- Szemaforok
- Sorompók

## Kommunikáció

RocRail
↔ WiFi
↔ Bridge Node
↔ BLE
↔ Loco Node

RocRail
↔ WiFi
↔ Track Node