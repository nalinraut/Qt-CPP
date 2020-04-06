#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = nullptr);

    QSize minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;

    enum ShapeTypes { Astroid, Cycloid, HuygensCycloid, HypoCycloid};

    void backgroundColor (const QColor color) { mBackgroundColor = color;}
    QColor backgroundColor () const { return mBackgroundColor;}

    void shape (const ShapeTypes shape) { mShape = shape;}
    ShapeTypes shape () const {return mShape;}

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
signals:

public slots:

private:
    QColor mBackgroundColor;
    QColor mShapeColor;
    ShapeTypes mShape;



};

#endif // RENDERAREA_H
