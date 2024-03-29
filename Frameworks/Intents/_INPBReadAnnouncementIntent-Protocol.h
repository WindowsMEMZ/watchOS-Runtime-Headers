//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBReadAnnouncementIntent_Protocol_h
#define _INPBReadAnnouncementIntent_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBIntentMetadata.h"
#include "_INPBReadAnnouncementIntent-Protocol.h"

@class NSString;

@protocol _INPBReadAnnouncementIntent <NSObject>

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int readType;
@property (nonatomic) BOOL hasReadType;
@property (copy, nonatomic) NSString *startAnnouncementIdentifier;
@property (readonly, nonatomic) BOOL hasStartAnnouncementIdentifier;
@property (nonatomic) int userNotificationType;
@property (nonatomic) BOOL hasUserNotificationType;

/* instance methods */
- (id)readTypeAsString:(int)string;
- (int)StringAsReadType:(id)type;
- (id)userNotificationTypeAsString:(int)string;
- (int)StringAsUserNotificationType:(id)type;
@end

#endif /* _INPBReadAnnouncementIntent_Protocol_h */
