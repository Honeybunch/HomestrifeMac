#ifndef __MENUITEM_H_
#define __MENUITEM_H_

#include "hsobject.h"
#include "menu.h"

class HSMenuItem
{
public:
	HSMenuItem(HSObject * grahpic);
	~HSMenuItem();

	Menu * GetChild();
	HSObject * GetGraphic();

	void SetChild(Menu * child);
	void SetGraphic(HSObject * graphic);

protected:
	Menu * _child;
	HSObject * _graphic;
};

#endif