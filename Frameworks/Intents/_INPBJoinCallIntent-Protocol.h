//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBJoinCallIntent_Protocol_h
#define _INPBJoinCallIntent_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBCallGroupConversation.h"
#include "_INPBCallGroupConversationFilter.h"
#include "_INPBIntentMetadata.h"
#include "_INPBJoinCallIntent-Protocol.h"

@class NSString;

@protocol _INPBJoinCallIntent <NSObject>

@property (retain, nonatomic) _INPBCallGroupConversation *groupConversation;
@property (readonly, nonatomic) BOOL hasGroupConversation;
@property (retain, nonatomic) _INPBCallGroupConversationFilter *groupConversationFilter;
@property (readonly, nonatomic) BOOL hasGroupConversationFilter;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;

@end

#endif /* _INPBJoinCallIntent_Protocol_h */
