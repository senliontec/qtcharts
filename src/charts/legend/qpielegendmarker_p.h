/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd
** All rights reserved.
** For any questions to The Qt Company, please use contact form at http://qt.io
**
** This file is part of the Qt Charts module.
**
** Licensees holding valid commercial license for Qt may use this file in
** accordance with the Qt License Agreement provided with the Software
** or, alternatively, in accordance with the terms contained in a written
** agreement between you and The Qt Company.
**
** If you have questions regarding the use of this file, please use
** contact form at http://qt.io
**
****************************************************************************/

//  W A R N I N G
//  -------------
//
// This file is not part of the Qt Chart API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.

#ifndef QPIELEGENDMARKER_P_H
#define QPIELEGENDMARKER_P_H

#include <QtCharts/QChartGlobal>
#include <private/qlegendmarker_p.h>
#include <private/legendmarkeritem_p.h>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>

QT_CHARTS_BEGIN_NAMESPACE

class QPieLegendMarker;

class QPieLegendMarkerPrivate : public QLegendMarkerPrivate
{
    Q_OBJECT
public:
    explicit QPieLegendMarkerPrivate(QPieLegendMarker *q, QPieSeries *series, QPieSlice *slice, QLegend *legend);
    virtual ~QPieLegendMarkerPrivate();

    // internal
    virtual QPieSeries* series();
    virtual QObject* relatedObject();

public Q_SLOTS:
    virtual void updated();

private:
    QPieLegendMarker *q_ptr;

    QPieSeries *m_series;
    QPieSlice *m_slice;

    Q_DECLARE_PUBLIC(QPieLegendMarker)
};

QT_CHARTS_END_NAMESPACE

#endif // QPIELEGENDMARKER_P_H
