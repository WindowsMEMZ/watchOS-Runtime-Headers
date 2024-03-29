//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAPhoneIncomingCallSearch_h
#define SAPhoneIncomingCallSearch_h
@import Foundation;

#include "SABaseClientBoundCommand.h"

@interface SAPhoneIncomingCallSearch : SABaseClientBoundCommand
/* class methods */
+ (id)incomingCallSearch;
+ (id)incomingCallSearchWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SAPhoneIncomingCallSearch_h */
