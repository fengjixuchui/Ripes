#ifndef BACKGROUNDITEMS_H
#define BACKGROUNDITEMS_H

#include <QFont>
#include <QGraphicsItem>

namespace Graphics {
class Shape;

class DashLine : public QGraphicsItem {
public:
    DashLine(Shape* reg);
    QRectF boundingRect() const;
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);

private:
    Shape* m_regPtr;
    constexpr static int dashHeight = 100;
};

class Text : public QGraphicsItem {
public:
    Text(QPointF pos);
    void setText(const QString& text) {
        m_text = text;
        update();
    }
    QRectF boundingRect() const;
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);

private:
    QString m_text;
    QFont m_font;
    QPointF m_pos;
};

}  // namespace Graphics

#endif  // BACKGROUNDITEMS_H
