#include "StatusSlider.h"
#include <Debug.h>

StatusSlider::StatusSlider(BRect frame,
							const char *name,
							const char *label,
							BMessage *msg,
							int32 minValue,
							int32 maxValue,
							thumb_style thumbType = B_BLOCK_THUMB,
							uint32 resizingMode = B_FOLLOW_LEFT | B_FOLLOW_TOP,
							uint32 flags = B_FRAME_EVENTS | B_WILL_DRAW | B_NAVIGABLE)
:BSlider(frame, name, label, msg, minValue, maxValue, thumbType, resizingMode, flags)
{
	tmpUpdTxt = new char[32];
}

StatusSlider::~StatusSlider(void)
{
	delete[] tmpUpdTxt;
}

char *StatusSlider::UpdateText(void) const
{
	sprintf(tmpUpdTxt, UpdText.String(), (unsigned int)Value());
	return tmpUpdTxt;
}

void StatusSlider::SetUpdateText(char *utext)
{
	UpdText.SetTo(utext);
}
