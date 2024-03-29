//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITextPasteCoordinator_h
#define UITextPasteCoordinator_h
@import Foundation;

@class NSMutableArray;
@protocol OS_dispatch_group, UITextPasteCoordinatorDelegate;

@interface UITextPasteCoordinator : NSObject {
  /* instance variables */
  NSMutableArray *_items;
  NSObject<OS_dispatch_group> *_wait;
}

@property (readonly, weak, nonatomic) NSObject<UITextPasteCoordinatorDelegate> *delegate;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)addItem:(id)item;
- (void)setResult:(id)result forItem:(id)item;
- (BOOL)performBlockingWait:(double)wait;
- (void)_determineFinished;
- (void)_finish;
@end

#endif /* UITextPasteCoordinator_h */
