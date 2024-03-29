//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNiOSABEKParticipantMatchingSearchOperationDelegate_h
#define CNiOSABEKParticipantMatchingSearchOperationDelegate_h
@import Foundation;

#include "ABPredicateDelegate-Protocol.h"

@class NSString;

@interface CNiOSABEKParticipantMatchingSearchOperationDelegate : NSObject<ABPredicateDelegate>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)predicateShouldContinue:(id)continue;
- (BOOL)predicateShouldContinue:(id)continue afterFindingRecord:(void *)record;
@end

#endif /* CNiOSABEKParticipantMatchingSearchOperationDelegate_h */
