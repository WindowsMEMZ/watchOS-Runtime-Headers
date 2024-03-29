//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLStingPresentationPolicy_h
#define CSLStingPresentationPolicy_h
@import Foundation;

#include "CSLStingPresentationPolicyDelegate-Protocol.h"
#include "CSLStingSystemContextProvider.h"
#include "CSLStingViewState.h"

@interface CSLStingPresentationPolicy : NSObject {
  /* instance variables */
  CSLStingViewState *_pendingPresentationState;
  CSLStingSystemContextProvider *_systemContextProvider;
  BOOL _activeDepthSession;
}

@property (readonly, nonatomic) BOOL presentingContent;
@property (weak, nonatomic) NSObject<CSLStingPresentationPolicyDelegate> *delegate;
@property (nonatomic) BOOL stingEnabled;
@property (retain, nonatomic) CSLStingViewState *modelViewState;
@property (retain, nonatomic) CSLStingViewState *presentationViewState;

/* instance methods */
- (id)initWithSystemContextProvider:(id)provider;
- (void)_activeDepthSessionDidUpdate:(id)update;
- (void)_updatePresentingContentForStingEnabled:(BOOL)enabled modelViewState:(id)state presentationViewState:(id)state;
- (void)_updatePresentingContent;
- (BOOL)isPresentingContent;
- (BOOL)isStingEnabled;
@end

#endif /* CSLStingPresentationPolicy_h */
