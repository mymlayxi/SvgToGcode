#ifndef POLYGON_H
#define POLYGON_H

#include <QPolygonF>
#include <QtMath>
#include <QDebug>
#include "transform.h"
#include <QTransform>

class Polygon
{
public:
    explicit Polygon(QVector<QPointF> points, bool close = true);
    QPolygonF getPolygon() { return myPolygon; }
    void setTranslate(QPointF offset);
    void setRotation(rotationTransform transform);
    void setMatrix(matrix3x3_struct matrix);

private:
    QPolygonF myPolygon;

};

#endif // POLYGON_H
