//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassSnapshotCoordinator_h
#define PKPassSnapshotCoordinator_h
@import Foundation;

#include "PKPassSnapshotCoordinatorProtocol-Protocol.h"

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface PKPassSnapshotCoordinator : NSObject<PKPassSnapshotCoordinatorProtocol> {
  /* instance variables */
  NSArray *_secureElementIdentifiers;
  NSObject<OS_dispatch_queue> *_backgroundQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSEIDs:(id)seids;
- (id)cardSnapshotForSource:(id)source withSize:(struct CGSize { double x0; double x1; })size completion:(id /* block */)completion;
- (void)_createPassSnapshotFromPaymentPass:(id)pass withSize:(struct CGSize { double x0; double x1; })size completion:(id /* block */)completion;
- (id)_fallbackImageForCredential:(id)credential;
@end

#endif /* PKPassSnapshotCoordinator_h */
