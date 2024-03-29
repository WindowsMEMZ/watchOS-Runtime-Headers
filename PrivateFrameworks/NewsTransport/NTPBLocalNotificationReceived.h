//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBLocalNotificationReceived_h
#define NTPBLocalNotificationReceived_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface NTPBLocalNotificationReceived : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 localNotificationNumberReceived; } _has;
}

@property (nonatomic) BOOL hasLocalNotificationNumberReceived;
@property (nonatomic) int localNotificationNumberReceived;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBLocalNotificationReceived_h */
