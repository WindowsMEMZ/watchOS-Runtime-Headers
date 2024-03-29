//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUVolumeRevealController_h
#define NMUVolumeRevealController_h
@import Foundation;

#include "NMUVolumeRevealControllerDelegate-Protocol.h"
#include "PUICCrownInputSequencerDelegate-Protocol.h"

@class CADisplayLink, NSString, PUICCrownInputSequencer;

@interface NMUVolumeRevealController : NSObject<PUICCrownInputSequencerDelegate> {
  /* instance variables */
  BOOL _crownIndicatorSupport;
  unsigned long long _state;
  CADisplayLink *_recedeDisplayLink;
}

@property (weak, nonatomic) NSObject<NMUVolumeRevealControllerDelegate> *delegate;
@property (readonly, nonatomic) double revealProgress;
@property (readonly, nonatomic) PUICCrownInputSequencer *crownInputSequencer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithCrownIndicatorSupport:(BOOL)support;
- (void)dealloc;
- (BOOL)handleCrownInputEvent:(id)event;
- (void)reset;
- (void)crownInputSequencerOffsetDidChange:(id)change;
- (void)crownInputSequencerIdleDidChange:(id)change;
- (void)_handleRecedeDisplayLinkUpdate:(id)update;
- (void)_setState:(unsigned long long)state;
@end

#endif /* NMUVolumeRevealController_h */
