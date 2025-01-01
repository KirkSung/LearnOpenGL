#ifndef OPENGLWIDGET_QT_H
#define OPENGLWIDGET_QT_H

#include <QOpenGLWidget>

class OpenGLWidget_Qt : public QOpenGLWidget
{
public:
    OpenGLWidget_Qt();

protected:

    virtual void initializeGL();
    virtual void resizeGL(int w, int h);
    virtual void paintGL();
};

#endif // OPENGLWIDGET_QT_H
