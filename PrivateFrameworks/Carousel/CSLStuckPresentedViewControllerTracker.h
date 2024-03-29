//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLStuckPresentedViewControllerTracker_h
#define CSLStuckPresentedViewControllerTracker_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"

@class NSMutableArray, NSString;

@interface CSLStuckPresentedViewControllerTracker : NSObject<BSDescriptionProviding> {
  /* instance variables */
  unsigned long long _stateHandle;
}

@property (retain, nonatomic) NSMutableArray *stuckItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultTracker;

/* instance methods */
- (id)init;
- (void)dealloc;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 :32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64] char x1[64] } x2; char x3[64] unsigned char x4[0] } *)stateDataWithHints:(struct os_state_hints_s { unsigned int x0; char * x1; unsigned int x2; unsigned int x3; } *)hints;
- (void)presentedViewControllerDidFailToCompleteTransition:(id)transition;
- (void)presentedViewControllerDidCompleteTransition:(id)transition;
- (BOOL)hasFailedTransitionForViewController:(id)controller;
- (id)_existingPresentationItemForViewController:(id)controller;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* CSLStuckPresentedViewControllerTracker_h */
