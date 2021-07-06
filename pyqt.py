from PyQt5.QtGui import QImage, QColor
from PyQt5 import QtCore

srcImage = QImage("An_Teallach_panorama.jpg")
dstImage = None

for i in range(100):
    dstImage = srcImage.scaled(srcImage.height(), srcImage.width(), QtCore.Qt.IgnoreAspectRatio, QtCore.Qt.SmoothTransformation)
    print(i)

dstImage.save("output-pyqt.png")
