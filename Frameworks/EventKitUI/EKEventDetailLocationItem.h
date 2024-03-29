//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKEventDetailLocationItem_h
#define EKEventDetailLocationItem_h
@import Foundation;

#include "EKTextViewWithLabelTextMetrics.h"
#include "UITextViewDelegate-Protocol.h"

@class NSString, NSURL, UITapGestureRecognizer;

@interface EKEventDetailLocationItem : NSObject<UITextViewDelegate> {
  /* instance variables */
  EKTextViewWithLabelTextMetrics *_locationView;
  NSURL *_locationURL;
  UITapGestureRecognizer *_locationTapRecognizer;
  BOOL _locationIsAttendee;
  long long _locationStatus;
  NSString *_locationComment;
}

@property BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (retain) NSString *locationTitle;
@property (retain) UITapGestureRecognizer *tapRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)isValidLocation:(id)location event:(id)event;

/* instance methods */
- (id)initWithLocationName:(id)name forEvent:(id)event;
- (void)updateAttributedString;
- (void)updateLocation:(id)location forEvent:(id)event;
- (id)locationView;
- (void)textViewDidChangeSelection:(id)selection;
- (void)_locationTapped;
@end

#endif /* EKEventDetailLocationItem_h */
