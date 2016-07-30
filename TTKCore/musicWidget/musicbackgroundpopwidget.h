#ifndef MUSICBACKGROUNDPOPWIDGET_H
#define MUSICBACKGROUNDPOPWIDGET_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2014 - 2016 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include "musictoolmenuwidget.h"

class QSlider;

/*! @brief The class of the volume popup widget.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_WIDGET_EXPORT MusicBackgroundPopWidget : public MusicToolMenuWidget
{
    Q_OBJECT
public:
    explicit MusicBackgroundPopWidget(QWidget *parent = 0);
    /*!
     * Object contsructor.
     */
    virtual ~MusicBackgroundPopWidget();

    static QString getClassName();
    /*!
     * Get class object name.
     */

    void setValue(int value);
    /*!
     * Set slider value.
     */
    int value() const;
    /*!
     * Get slider value.
     */

Q_SIGNALS:
    void valueChanged(int value);
    /*!
     * Current play transparent changed.
     */

protected:
    void initWidget();
    /*!
     * Create all widget in layout.
     */

    QSlider *m_slider;

};

#endif // MUSICBACKGROUNDPOPWIDGET_H
