//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SARDNlOutcomeCandidate_h
#define SARDNlOutcomeCandidate_h
@import Foundation;

#include "SABaseClientBoundCommand.h"

@class NSData, NSString;

@interface SARDNlOutcomeCandidate : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *nlIntentHierarchyContainerProto;
@property (copy, nonatomic) NSString *resultCandidateId;

/* class methods */
+ (id)nlOutcomeCandidate;
+ (id)nlOutcomeCandidateWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SARDNlOutcomeCandidate_h */
