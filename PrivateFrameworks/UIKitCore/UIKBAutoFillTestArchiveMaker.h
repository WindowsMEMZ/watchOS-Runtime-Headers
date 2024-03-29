//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBAutoFillTestArchiveMaker_h
#define UIKBAutoFillTestArchiveMaker_h
@import Foundation;

#include "NSKeyedArchiverDelegate-Protocol.h"
#include "UIKBAutoFillTestArchive.h"
#include "UIViewController.h"

@class NSString;

@interface UIKBAutoFillTestArchiveMaker : NSObject<NSKeyedArchiverDelegate> {
  /* instance variables */
  UIKBAutoFillTestArchive *_testArchive;
  UIViewController *_viewControllerToSnapshot;
  long long _currentTableViewTag;
  long long _currentTextFieldTag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)archiveMakerWithViewControllerToSnapshot:(id)snapshot;

/* instance methods */
- (id)initWithViewControllerToSnapshot:(id)snapshot;
- (id)makeArchive;
- (id)_cloneView:(id)view;
- (void)_applyPropertiesFromView:(id)view toView:(id)view;
- (void)_applyPropertiesFromLabel:(id)label toLabel:(id)label;
- (id)_cloneLabel:(id)label;
- (id)_cloneTextField:(id)field;
- (id)_cloneTextView:(id)view;
- (id)_cloneButton:(id)button;
- (id)_cloneGenericView:(id)view;
- (id)_cloneTableView:(id)view;
- (id)_cloneViewHierarchyFromRootView:(id)view;
- (id)_cloneBarButtonItem:(id)item;
- (id)_cloneNavigationItem:(id)item;
- (id)_makeCopyOfObject:(id)object;
- (id)archiver:(id)archiver willEncodeObject:(id)object;
@end

#endif /* UIKBAutoFillTestArchiveMaker_h */
