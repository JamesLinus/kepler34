#ifndef EDITFRAME_HPP
#define EDITFRAME_HPP

#include "MidiPerformance.hpp"
#include "MidiSequence.hpp"
#include "EditKeys.hpp"
#include "EditTimeBar.hpp"
#include "EditNoteRoll.hpp"

#include <QFrame>
#include <QLayout>
#include <qmath.h>
#include <QScrollBar>
#include <QScrollArea>

namespace Ui {
class EditFrame;
}

class EditFrame : public QFrame
{
    Q_OBJECT

public:
    explicit EditFrame(QWidget *parent, MidiPerformance *perf, MidiSequence *seq);
    ~EditFrame();

private:
    Ui::EditFrame *ui;

    QGridLayout     *m_layout_grid;
    QScrollArea     *m_scroll_area;
    QScrollBar      *m_scroll_horiz;
    QScrollBar      *m_scroll_vert;
    QWidget         *m_container;

    MidiSequence       * const m_seq;
    MidiPerformance    * const m_perf;

    EditKeys     *m_seqkeys_wid;
    EditTimeBar  *m_seqtime_wid;
    EditNoteRoll *m_seqroll_wid;

};

#endif // EDITFRAME_HPP
