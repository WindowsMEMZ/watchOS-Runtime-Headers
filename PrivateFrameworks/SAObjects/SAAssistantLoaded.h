//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAAssistantLoaded_h
#define SAAssistantLoaded_h
@import Foundation;

#include "SABaseClientBoundCommand.h"

@class NSArray, NSNumber, NSString;

@interface SAAssistantLoaded : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *appleConnectSessionToken;
@property (copy, nonatomic) NSString *dataAnchor;
@property (copy, nonatomic) NSNumber *requestSync;
@property (copy, nonatomic) NSArray *syncAnchors;
@property (copy, nonatomic) NSString *version;

/* class methods */
+ (id)assistantLoaded;
+ (id)assistantLoadedWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SAAssistantLoaded_h */
