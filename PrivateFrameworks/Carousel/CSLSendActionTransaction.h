//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSendActionTransaction_h
#define CSLSendActionTransaction_h
@import Foundation;

#include "BSTransaction.h"
#include "FBSceneObserver-Protocol.h"

@class FBScene, FBSceneUpdateContext, NSSet, NSString;

@interface CSLSendActionTransaction : BSTransaction<FBSceneObserver> {
  /* instance variables */
  FBSceneUpdateContext *_context;
}

@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) NSSet *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScene:(id)scene actions:(id)actions;
- (void)_begin;
- (void)scene:(id)scene didPrepareUpdateWithContext:(id)context;
- (void)scene:(id)scene didCompleteUpdateWithContext:(id)context error:(id)error;
@end

#endif /* CSLSendActionTransaction_h */
