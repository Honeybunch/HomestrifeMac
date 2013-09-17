#include "menuItem.h"

////////////
//MenuItem//
////////////

HSMenuItem::HSMenuItem(HSObject * graphic)
{
	_child = NULL;
	_graphic = graphic;
}

HSMenuItem::~HSMenuItem()
{

}

Menu * HSMenuItem::GetChild()
{
	return _child;
}

HSObject * HSMenuItem::GetGraphic()
{
	return _graphic;
}

void HSMenuItem::SetChild(Menu * child)
{
	_child = child;
}

void HSMenuItem::SetGraphic(HSObject * graphic)
{
	_graphic = graphic;
}