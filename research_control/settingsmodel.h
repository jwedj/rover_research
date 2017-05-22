#ifndef SORO_MISSIONCONTROL_SETTINGSMODEL_H
#define SORO_MISSIONCONTROL_SETTINGSMODEL_H

#include <QtCore>
#include <QHash>
#include <QHostAddress>

#include "soro_core/constants.h"
#include "soro_core/gstreamerutil.h"

namespace Soro {

struct SettingsModel {

    SettingsModel();

    bool enableVideo;
    bool enableStereoVideo;
    bool enableAudio;
    bool enableHud;
    bool enableGps;

    int selectedVideoEncoding;
    int selectedVideoWidth;
    int selectedVideoHeight;
    int selectedVideoFramerate;
    int selectedVideoBitrate;
    int selectedMjpegQuality;
    int selectedCamera;
    int selectedLatency;
    int selectedHudParallax;
    int selectedHudLatency;

    int mainCameraIndex;
    int aux1CameraIndex;

    QHostAddress roverAddress;
    bool useHwRendering;
    QHash<quint8, bool> useVaapiEncodeForCodec;
    QHash<quint8, bool> useVaapiDecodeForCodec;

    QStringList cameraNames;
    QStringList videoEncodingNames;
    GStreamerUtil::AudioProfile defaultAudioFormat;

    void setSelectedCamera(int mediaId);
    GStreamerUtil::VideoProfile getSelectedVideoProfile();
};

} // namespace Soro

#endif // SORO_MISSIONCONTROL_SETTINGSMODEL_H