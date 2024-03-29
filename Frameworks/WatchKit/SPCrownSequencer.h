//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.2.0.0
//
#ifndef SPCrownSequencer_h
#define SPCrownSequencer_h
@import Foundation;

#include "PUICCrownInputSequencerDelegate-Protocol.h"
#include "SPViewController.h"

@class NSString, PUICCrownInputSequencer;

@interface SPCrownSequencer : NSObject<PUICCrownInputSequencerDelegate> {
  /* instance variables */
  BOOL _wasFocusCalled;
  BOOL _useMinorDetents;
}

@property (retain, nonatomic) PUICCrownInputSequencer *puicSequencer;
@property (weak, nonatomic) SPViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewController:(id)controller;
- (void)updateWithCrownInputEvent:(id)event;
- (BOOL)crownFocused;
- (void)updateWithCrownReplyData:(id)data;
- (id)dictionaryRepresentationWithDelta:(double)delta;
- (void)crownInputSequencerIdleDidChange:(id)change;
- (void)_crownInputSequencer:(id)sequencer offsetDidChangeByDelta:(double)delta;
@end

#endif /* SPCrownSequencer_h */
