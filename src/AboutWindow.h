/*
 
AboutWindow.h

a-book -- a small calendar application with reminder

Copyright (C) 2002 Maurice Michalski, http://fetal.de, http://maurice-michalski.de

Permission is hereby granted, free of charge, to any person obtaining a copy of this
software and associated documentation files (the "Software"), to deal in the Software
without restriction, including without limitation the rights to use, copy, modify,
merge, publish, distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to the following
conditions:

The above copyright notice and this permission notice shall be included in all copies
or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 
*/
#ifndef _ABOUTWINDOW_H_
#define _ABOUTWINDOW_H_

#include <Window.h>
#include <View.h>
#include <Bitmap.h>
#include <Rect.h>
#include <StringView.h>
#include <TextView.h>

class AboutView : public BView {
public:
	AboutView(BRect frame, const char *name, BBitmap *icon);
	~AboutView();
	
	virtual void 	Draw(BRect updateRect);
	void			SetIcon(BBitmap *icon);
private:
	BBitmap	*bIcon;
};

class AboutWindow : public BWindow {
public:
	AboutWindow(BRect frame, const char *title);
	~AboutWindow();
	
	void SetApplicationName(const char *);
	void SetVersionNumber(const char *);
	void SetIcon(BBitmap *);
	void SetCopyrightString(const char *);
	void SetText(const char *);
	
	virtual bool QuitRequested();
	
private:
	AboutView	*vAbout;
	BStringView	*applicationNameSV,
			*versionNumberSV,
			*copyrightStringSV;
	BTextView	*textTV;
};


#endif
