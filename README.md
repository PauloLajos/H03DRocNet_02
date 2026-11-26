# H03DRocNet_02

## Projekt áttekintés

### Cél
- RocNet alapú H0 vasútvezérlő rendszer
- ESP32 alapú modulok
- WiFi/Ethernet kommunikáció
- Rocrail kompatibilitás

### Fő komponensek
- Bridge
- Loco
- TrackNode
- Későbbi modulok

---

## Rendszerarchitektúra

### Hálózati felépítés

Rocrail
   │
Bridge
   │
──────────── RocNet ────────────
│              │              │
Loco         TrackNode      ...

### Fő üzenetfolyamok

- Heartbeat
- Discovery
- Command Message
- Status Message

---

## Hardver

### Bridge

ESP32 típus:
- ESP32 DevKit V1

Bekötések:

| Funkció | GPIO |
|----------|------|
| LED | 2 |

---

### TrackNode

Bemenetek:
- Foglaltságérzékelők
- Kapcsolók

Kimenetek:
- Relék
- LED-ek

---

## Firmware struktúra

### Bridge

firmware/
└─ bridge/
   ├─ include/
   ├─ src/
   └─ test/

### Fontos fájlok

#### main.cpp

Feladata:
- indulás
- WiFi inicializálás
- RocNet inicializálás

#### command_message.h

Feladata:
- RocNet parancsok deklarációja
- üzenetstruktúrák

#### command_message.cpp

Feladata:
- üzenetek feldolgozása
- parancskezelés

---

## Protokoll dokumentáció

### Node azonosító

- Node ID
- Group ID

### Üzenetformátum

Byte0 : Command
Byte1 : Group
Byte2 : Node
...

### Ismert parancsok

| Kód | Jelentés |
|------|----------|
| 0x01 | Discovery |
| 0x02 | Status |

---

## Fejlesztési napló

### 2026-11-25

Kész:
- GitHub repó létrehozva
- PlatformIO működik
- Bridge firmware fordul

Problémák:
- IntelliSense includePath hibák

Következő lépés:
- command_message.h létrehozása

---

## Feladatlista

### Magas prioritás

- [ ] command_message.h
- [ ] command_message.cpp
- [ ] Üzenet parser
- [ ] Unit tesztek

### Közepes prioritás

- [ ] MQTT integráció
- [ ] WebUI

---

## Hibajegyzetek

### Arduino.h piros hibajelzés

Tünet:

Cannot open source file Arduino.h

Ok:
- Nem a PlatformIO projekt gyökérkönyvtára volt megnyitva.

Megoldás:
- A firmware/bridge mappát kell külön PlatformIO projektként megnyitni.

---

## Referenciák

### GitHub

https://github.com/PauloLajos/H03DRocNet_02

### Dokumentációk

- Rocrail / RocNet dokumentáció
- ESP32 Espressif dokumentáció
- PlatformIO dokumentáció

---

## Jövőbeli ötletek

- OTA firmware frissítés
- Webes konfiguráció
- Automatikus node discovery
- CAN buszos bővítés
- 3D nyomtatható házak

---

## Aktuális állapot

✅ GitHub repó létrehozva
✅ Bridge projekt fordul PlatformIO alatt
✅ Arduino.h probléma tisztázva
⏳ Command Message réteg következik

Következő konkrét feladat:
➡ command_message.h létrehozása
