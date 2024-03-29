//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 13.0.0.0.0
//
#ifndef SCRApprovalCoordinator_h
#define SCRApprovalCoordinator_h
@import Foundation;

#include "SCRCompositeGovernor.h"
#include "SCRTaskAdministrator.h"

@interface SCRApprovalCoordinator : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  SCRTaskAdministrator *_administrator;
  SCRCompositeGovernor *_compositeGovernor;
}

/* instance methods */
- (id)initWithAdministrator:(id)administrator;
- (void)addGovernor:(id)governor;
- (void)removeGovernor:(id)governor;
- (BOOL)getApprovalForTask:(id)task error:(id *)error;
- (void)didCompleteTask:(id)task withError:(id)error;
@end

#endif /* SCRApprovalCoordinator_h */
