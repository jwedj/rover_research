#ifndef AUDIOSTREAMER_H
#define AUDIOSTREAMER_H

#include <QObject>
#include <QCoreApplication>
#include <QTcpSocket>

#include <Qt5GStreamer/QGst/Ui/VideoWidget>
#include <Qt5GStreamer/QGst/Pipeline>
#include <Qt5GStreamer/QGst/Element>
#include <Qt5GStreamer/QGst/ElementFactory>
#include <Qt5GStreamer/QGst/Bin>
#include <Qt5GStreamer/QGst/Bus>
#include <Qt5GStreamer/QGlib/RefPointer>
#include <Qt5GStreamer/QGlib/Error>
#include <Qt5GStreamer/QGlib/Connect>
#include <Qt5GStreamer/QGst/Message>

//#include <flycapture/FlyCapture2.h>

#include "core/socketaddress.h"
#include "core/videoformat.h"
#include "core/mediastreamer.h"

namespace Soro {

class VideoStreamer : public MediaStreamer {
    Q_OBJECT
public:
    VideoStreamer(QGst::ElementPtr source, VideoFormat format, SocketAddress bindAddress, SocketAddress address, quint16 ipcPort, QObject *parent = 0);
    VideoStreamer(QString deviceName, VideoFormat format, SocketAddress bindAddress, SocketAddress address, quint16 ipcPort, QObject *parent = 0);
};

} // namespace Soro

#endif // AUDIOSTREAMER_H
