/**
 * Created by univrsal on 25.06.20178.
 * This file is part of reloded which is licensed
 * under the MOZILLA PUBLIC LICENSE 2.0 - mozilla.org/en-US/MPL/2.0/
 * github.com/univrsal/reloded
 */

#pragma once

#include "GuiElement.hpp"
#include "../Dialog.hpp"

#define CHECKBOX_SIZE 17
class Checkbox :
	public GuiElement
{
public:

	Checkbox(int8_t id, int x, int y, const char * text, Dialog * parent);
	Checkbox(int8_t id, int x, int y, const char * text, Dialog * parent, bool state);

	~Checkbox();

	void close(void);

	bool can_select(void);

	void select_state(bool state);

	void draw_background(void);

	void draw_foreground(void);

	bool handle_events(SDL_Event * event);

	bool get_state(void) { return m_state; }
private:
	bool m_focused = false;
	bool m_state = false;
	Label * m_label = nullptr;
	SDL_Rect m_checkbox;
};