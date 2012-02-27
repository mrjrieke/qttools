/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/
**
** This file is part of the Qt Assistant of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QHELPSEARCHRESULTWIDGET_H
#define QHELPSEARCHRESULTWIDGET_H

#include <QtHelp/qhelpsearchengine.h>
#include <QtHelp/qhelp_global.h>

#include <QtCore/QUrl>
#include <QtCore/QPoint>
#include <QtCore/QObject>

#include <QtWidgets/QWidget>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE


class QHelpSearchResultWidgetPrivate;

class QHELP_EXPORT QHelpSearchResultWidget : public QWidget
{
    Q_OBJECT

public:
    ~QHelpSearchResultWidget();
    QUrl linkAt(const QPoint &point);

Q_SIGNALS:
    void requestShowLink(const QUrl &url);

private:
    friend class QHelpSearchEngine;

    QHelpSearchResultWidgetPrivate *d;
    QHelpSearchResultWidget(QHelpSearchEngine *engine);
    virtual void changeEvent(QEvent *event);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif  // QHELPSEARCHRESULTWIDGET_H