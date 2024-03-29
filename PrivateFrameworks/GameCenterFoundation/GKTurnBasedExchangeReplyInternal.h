//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKTurnBasedExchangeReplyInternal_h
#define GKTurnBasedExchangeReplyInternal_h
@import Foundation;

#include "GKInternalRepresentation.h"

@class NSData, NSDate, NSDictionary;

@interface GKTurnBasedExchangeReplyInternal : GKInternalRepresentation

@property (nonatomic) unsigned char recipientIndex;
@property (retain, nonatomic) NSDictionary *localizableMessage;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDate *replyDate;

/* class methods */
+ (id)secureCodedPropertyKeys;

/* instance methods */
@end

#endif /* GKTurnBasedExchangeReplyInternal_h */
