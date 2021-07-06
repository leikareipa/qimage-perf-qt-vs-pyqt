#include <QtGui/QImage>

int main()
{
    QImage srcImage = QImage("An_Teallach_panorama.jpg");
    QImage dstImage;
    
    for (unsigned i = 0; i < 100; i++)
    {
        dstImage = srcImage.scaled(srcImage.height(), srcImage.width(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        printf("%u\n", i);
    }

    dstImage.save("output-qt.png");
}
