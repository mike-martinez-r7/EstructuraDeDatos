#pragma once

class Collection {
	public:
		virtual int getLength() = 0;
	protected:
		int length = 0;
};