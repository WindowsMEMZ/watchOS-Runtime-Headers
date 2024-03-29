//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SARemembersGetRelativeAppUsageProbabilities_h
#define SARemembersGetRelativeAppUsageProbabilities_h
@import Foundation;

#include "SABaseClientBoundCommand.h"
#include "SAAceSerializable-Protocol.h"

@class NSArray, NSString;

@interface SARemembersGetRelativeAppUsageProbabilities : SABaseClientBoundCommand<SAAceSerializable>

@property (copy, nonatomic) NSArray *bundleIDs;
@property (nonatomic) long long days;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)getRelativeAppUsageProbabilities;
+ (id)getRelativeAppUsageProbabilitiesWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
@end

#endif /* SARemembersGetRelativeAppUsageProbabilities_h */
