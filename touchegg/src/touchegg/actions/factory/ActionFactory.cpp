/**
 * @file /src/touchegg/actions/factory/ActionFactory.cpp
 *
 * @~spanish
 * Este archivo es parte del proyecto Touchégg, usted puede redistribuirlo y/o
 * modificarlo bajo los téminos de la licencia GNU GPL v3.
 *
 * @~english
 * This file is part of the Touchégg project, you can redistribute it and/or
 * modify it under the terms of the GNU GPL v3.
 *
 * @class  ActionFactory
 * @author José Expósito
 */
#include "ActionFactory.h"

// ************************************************************************** //
// **********             STATIC METHODS AND VARIABLES             ********** //
// ************************************************************************** //

ActionFactory* ActionFactory::instance = NULL;

ActionFactory* ActionFactory::getInstance() {
    if(ActionFactory::instance == NULL)
        ActionFactory::instance = new ActionFactory();

    return ActionFactory::instance;
}


// ************************************************************************** //
// **********                    PUBLIC METHODS                    ********** //
// ************************************************************************** //

Action* ActionFactory::createAction(ActionTypeEnum::ActionType actionType,
        const QString& settings, Window window) {
    switch(actionType) {
    case ActionTypeEnum::NO_ACTION:
        return NULL;

    case ActionTypeEnum::RIGHT_BUTTON_CLICK:
        return new RightButtonClick(settings, window);

    case ActionTypeEnum::MIDDLE_BUTTON_CLICK:
        return new MiddleButtonClick(settings, window);

    case ActionTypeEnum::VERTICAL_SCROLL:
        return new VerticalScroll(settings, window);

    case ActionTypeEnum::HORIZONTAL_SCROLL:
        return new HorizontalScroll(settings, window);

    case ActionTypeEnum::MINIMIZE_WINDOW:
        return new MinimizeWindow(settings, window);

    case ActionTypeEnum::MAXIMIZE_RESTORE_WINDOW:
        return new MaximizeRestoreWindow(settings, window);

    case ActionTypeEnum::CLOSE_WINDOW:
        return new CloseWindow(settings, window);

    case ActionTypeEnum::RESIZE_WINDOW:
        return new ResizeWindow(settings, window);

    case ActionTypeEnum::SHOW_DESKTOP:
        return new ShowDesktop(settings, window);

    case ActionTypeEnum::CHANGE_DESKTOP:
        return new ChangeDesktop(settings, window);

    case ActionTypeEnum::CHANGE_VIEWPORT:
        return new ChangeViewport(settings, window);

    case ActionTypeEnum::SEND_KEYS:
        return new SendKeys(settings, window);

    case ActionTypeEnum::MOVE_WINDOW:
        return new MoveWindow(settings, window);

    case ActionTypeEnum::RUN_COMMAND:
        return new RunCommand(settings, window);

    case ActionTypeEnum::DRAG_AND_DROP:
        return new DragAndDrop(settings, window);

    case ActionTypeEnum::LEFT_BUTTON_CLICK:
        return new LeftButtonClick(settings, window);

    default:
        return NULL;
    }
}
