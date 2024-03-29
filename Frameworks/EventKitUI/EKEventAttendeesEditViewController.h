//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKEventAttendeesEditViewController_h
#define EKEventAttendeesEditViewController_h
@import Foundation;

#include "EKEditItemViewController.h"
#include "EKUIManagedViewController-Protocol.h"

@class EKEvent, EKEventAttendeePicker, NSArray, NSString;

@interface EKEventAttendeesEditViewController : EKEditItemViewController<EKUIManagedViewController> {
  /* instance variables */
  EKEventAttendeePicker *_picker;
  EKEvent *_event;
  BOOL _cancelTapped;
}

@property (nonatomic) BOOL disableShowingButtons;
@property (copy, nonatomic) NSArray *attendees;
@property (nonatomic) BOOL appendOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame event:(id)event overriddenEventStartDate:(id)date overriddenEventEndDate:(id)date;
- (void)setSearchAccountID:(id)id;
- (BOOL)prefersToBePresentedFromUINavigationController;
@end

#endif /* EKEventAttendeesEditViewController_h */
