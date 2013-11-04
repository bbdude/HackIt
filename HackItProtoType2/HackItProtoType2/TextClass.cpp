#include "stdafx.h"
#include "TextClass.h"


TextClass::TextClass(void)
{
	maxLines = 0;
}


TextClass::~TextClass(void)
{
}

void TextClass::setMaxLines(int change)
{
	maxLines = change;
}
void TextClass::setCurrentLine(int change)
{
	currentLine = change;
}
void TextClass::setWidth(int change)
{
	width = change;
}
void TextClass::setHeight(int change)
{
	height = change;
}
void TextClass::setLine(string change,int whichLine)
{
  lines[whichLine] = change;
}
void TextClass::setLine(string change)
{
	lines[currentLine] = change;
}

int TextClass::getMaxLines()
{
	return maxLines;
}
int TextClass::getCurrentLine()
{
	return currentLine;
}
int TextClass::getWidth()
{
	return width;
}
int TextClass::getHeight()
{
	return height;
}

string TextClass::getCurrentLineText()
{
	return lines[currentLine];
}
string TextClass::getLineText(int line)
{
	return lines[line];
}