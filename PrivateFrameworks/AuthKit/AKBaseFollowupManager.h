//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKBaseFollowupManager_h
#define AKBaseFollowupManager_h
@import Foundation;

#include "AKFollowUpItemFactory-Protocol.h"
#include "AKFollowUpProvider-Protocol.h"

@interface AKBaseFollowupManager : NSObject {
  /* instance variables */
  NSObject<AKFollowUpItemFactory> *_factory;
  NSObject<AKFollowUpProvider> *_provider;
}

/* instance methods */
- (id)initWithFollowUpFactory:(id)factory provider:(id)provider;
- (BOOL)synchronizeFollowUpsWithServerPayload:(id)payload altDSID:(id)dsid error:(id *)error;
- (void)teardownFollowUpWithContext:(id)context completion:(id /* block */)completion;
- (id)_alignedInsertionCandidates:(id)candidates withExistingItems:(id)items;
@end

#endif /* AKBaseFollowupManager_h */
