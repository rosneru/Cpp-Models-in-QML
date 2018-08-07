# README #

Tutorial zum Thema QML / QtQuick / C++. Es wird eine ToDo-List-App 
erstellt.

[Tutorial-Video auf Youtube](https://www.youtube.com/watch?v=9BcAYDlpuT8 "Using C++ Models in QML")

### Entwicklungsumgebung ###

Das Projekt wurde unter Windows erstellt mit:
* Qt Creator 4.7.0
* Qt 5.11.1
* C++ - Compiler von Visual Studio 2017
* C++ - Debugger CDB aus dem Windows 10 - SDK 

Damit das Projekt auch auf aktuellen Debian Stretch - Distributionen 
(enthalten Qt 5.7) verwendet werden kann, wurde auf Kompatibilität 
geachtet:
* Nur unter Qt2.7 verwendete QtQuick-controls verwendet:
  * import QtQuick 2.7 anstatt 2.11
