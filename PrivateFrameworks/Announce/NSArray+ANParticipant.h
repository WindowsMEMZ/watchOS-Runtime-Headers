//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef NSArray_ANParticipant_h
#define NSArray_ANParticipant_h
@import Foundation;

#include "ANCompanionMessage-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface NSArray (ANParticipant)
/* instance methods */
- (id)unplayedAnnouncements;
- (id)playedAnnouncements;
- (id)identifiers;
- (id)idsIdentifiers;
- (id)rapportIDs;
- (id)messages;
@end

#endif /* NSArray_ANParticipant_h */
