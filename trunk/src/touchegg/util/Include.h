/**
 * @file /src/touchegg/util/Include.h
 *
 * @~spanish
 * Este archivo es parte del proyecto Touchégg, usted puede redistribuirlo y/o
 * modificarlo bajo los téminos de la licencia GNU GPL v3.
 *
 * @~english
 * This file is part of the Touchégg project, you can redistribute it and/or
 * modify it under the terms of the GNU GPL v3.
 *
 * @author José Expósito
 */
#ifndef INCLUDE_H
#define INCLUDE_H

    // Qt
    #include <QApplication>
    #include <QObject>
    #include <QTimer>
    #include <QThread>
    #include <QDebug>
    #include <QX11Info>
    #include <QHash>
    #include <QString>
    #include <QStringList>
    #include <QVariant>
    #include <QDir>
    #include <QFile>
    #include <QSettings>
    #include <QMetaEnum>
    #include <QMetaEnum>

    // Xlib
    #include <X11/Xlib.h>
    #include <X11/Xutil.h>
    #include <X11/Xatom.h>

    // utouch-geis
    extern "C" {
        #include <geis/geis.h>
    }

    // Others
    #include <cmath>

#endif // INCLUDE_H
