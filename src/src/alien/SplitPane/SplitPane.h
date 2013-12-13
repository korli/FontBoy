/*******************************************************
*   SplitPane©
*
*   SplitPane is a usefull UI component. It alows the 
*   use to ajust two view Horizontaly or Vertacly so
*   that they are a desired size. This type of Pane 
*   shows up most comonly in Mail/News Readers.
*
*   @author  YNOP (ynop@acm.org)
*   @version beta
*   @date    Dec. 10 1999
*******************************************************/
#ifndef _SPLIT_PANE_VIEW_H
#define _SPLIT_PANE_VIEW_H

#include <Application.h>
#include <AppKit.h>
#include <InterfaceKit.h>

#define SPLITPANE_STATE 'spst'

class SplitPane : public BView {
   public:
      SplitPane(BRect,BView*,BView*,uint32);
      void AddChildOne(BView*);
      void AddChildTwo(BView*);
      void SetAlignment(uint);
      uint GetAlignment();
      void SetBarPosition(int);
      int  GetBarPosition();
      void SetBarThickness(int);
      int  GetBarThickness();
      void SetJump(int);
      int  GetJump();
      bool HasViewOne();
      bool HasViewTwo();
      void SetViewOneDetachable(bool);
      void SetViewTwoDetachable(bool);
      bool IsViewOneDetachable();
      bool IsViewTwoDetachable();
      void SetEditable(bool);
      bool IsEditable();
      void SetViewInsetBy(int);
      int  GetViewInsetBy();
      void SetMinSizeOne(int);
      int  GetMinSizeOne();
      void SetMinSizeTwo(int);
      int  GetMinSizeTwo();
      BMessage* GetState();
      void SetBarLocked(bool);
      bool IsBarLocked();
      void SetBarAlignmentLocked(bool);
      bool IsBarAlignmentLocked();
      void SetState(BMessage*);
      virtual void Draw(BRect);
      virtual void AttachedToWindow();
      virtual void FrameResized(float,float);
      virtual void MouseDown(BPoint);
      virtual void MouseUp(BPoint);
      virtual void MouseMoved(BPoint,uint32,const BMessage*);
      virtual void MessageReceived(BMessage*);

   protected:
      virtual void Update();
      BPoint here;
      BView *PaneOne;
      BView *PaneTwo;
      int pos;

   private:
     
      //State info
      bool VOneDetachable;
      bool VTwoDetachable;
      uint align;
      int thickness;
      int jump;
      int pad;
      bool poslocked;
      bool alignlocked;
      //end State info
      
      bool Draggin;
      bool attached;
      
      int MinSizeOne;
      int MinSizeTwo;

      BWindow *WinOne;
      BWindow *WinTwo;
      
      BWindow *ConfigWindow;
};
#endif