import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Frame {
  ListView {
    implicitWidth: 250
    implicitHeight: 250
    clip: true

    model: 100
    delegate: RowLayout {
      width: parent.width

      CheckBox {}
      TextField {
        Layout.fillWidth: true
      }
    }
  }
}
