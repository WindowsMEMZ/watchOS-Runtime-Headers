//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBCallGroupConversation_Protocol_h
#define _INPBCallGroupConversation_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBCallGroup.h"
#include "_INPBCallGroupConversation-Protocol.h"
#include "_INPBContactValue.h"

@class NSArray, NSString;

@protocol _INPBCallGroupConversation <NSObject>

@property (retain, nonatomic) _INPBCallGroup *callGroup;
@property (readonly, nonatomic) BOOL hasCallGroup;
@property (retain, nonatomic) _INPBContactValue *caller;
@property (readonly, nonatomic) BOOL hasCaller;
@property (copy, nonatomic) NSString *conversationId;
@property (readonly, nonatomic) BOOL hasConversationId;
@property (copy, nonatomic) NSArray *otherParticipants;
@property (readonly, nonatomic) unsigned long long otherParticipantsCount;

/* class methods */
+ (Class)otherParticipantsType;
/* instance methods */
- (void)clearOtherParticipants;
- (void)addOtherParticipants:(id)participants;
- (id)otherParticipantsAtIndex:(unsigned long long)index;
@end

#endif /* _INPBCallGroupConversation_Protocol_h */
