/**
 * @file /src/touchegg/gestures/gesturesimp/FourFingersDragLeft.cpp
 *
 * @~spanish
 * Este archivo es parte del proyecto Touchégg, usted puede redistribuirlo y/o
 * modificarlo bajo los téminos de la licencia GNU GPL v3.
 *
 * @~english
 * This file is part of the Touchégg project, you can redistribute it and/or
 * modify it under the terms of the GNU GPL v3.
 *
 * @class  FourFingersDragLeft
 * @author José Expósito
 */
#include "FourFingersDragLeft.h"

// ************************************************************************** //
// **********              CONSTRUCTORS AND DESTRUCTOR             ********** //
// ************************************************************************** //

FourFingersDragLeft::FourFingersDragLeft(GeisGestureType type, GeisGestureId id,
        const QHash<QString, QVariant>& attrs, Action* action)
        : Gesture(type, id, attrs, action) {}


// ************************************************************************** //
// **********                    PUBLIC METHODS                    ********** //
// ************************************************************************** //

bool FourFingersDragLeft::isThisGesture(const QHash<QString, QVariant>& attrs) {
    // "gesture name" = "Drag"
    if(!attrs.contains("gesture name"))
        return false;

    if(attrs.value("gesture name", "") != "Drag")
        return false;

    // touches = 4
    if(!attrs.contains("touches"))
        return false;

    if(attrs.value("touches", -1) != 4)
        return false;

    // delta x < 0 && delta y = 0
    if(!attrs.contains("delta y") || !attrs.contains("delta x"))
        return false;

    return attrs.value("delta x").toFloat() < 0
        && attrs.value("delta y").toFloat() == 0;
}
