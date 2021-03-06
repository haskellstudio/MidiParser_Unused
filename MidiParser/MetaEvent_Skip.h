# pragma once
# include "MetaEvent.h"

class MetaEvent_Skip : public MetaEvent
{
public:
	virtual ~MetaEvent_Skip() override = default;
private:
	explicit MetaEvent_Skip(char statusByte, char metaType) :
		MetaEvent(statusByte, metaType)
	{}
	META_DECL(Skip);
};