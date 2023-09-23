#include "Widget.h"

void Widget::enable() { enabled = true; }

void Widget::disable() { enabled = false; }

bool Widget::isEnabled() const { return enabled; }
