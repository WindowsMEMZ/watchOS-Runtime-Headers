//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 971.300.71.0.0
//
#ifndef APSIncomingMessage_h
#define APSIncomingMessage_h
@import Foundation;

#include "APSMessage.h"

@class NSData, NSDate, NSString;

@interface APSIncomingMessage : APSMessage

@property (nonatomic) long long incomingInterface;
@property (copy, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSData *token;
@property (copy, nonatomic) NSData *perAppToken;
@property (nonatomic) BOOL fromStorage;
@property (nonatomic) BOOL lastMessageFromStorage;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL tracingEnabled;
@property (copy, nonatomic) NSData *tracingUUID;
@property (nonatomic) unsigned long long pushType;
@property (nonatomic) unsigned int pushFlags;
@property (retain, nonatomic) NSString *channelID;

/* instance methods */
- (BOOL)wasFromStorage;
- (BOOL)wasLastMessageFromStorage;
- (BOOL)isTracingEnabled;
@end

#endif /* APSIncomingMessage_h */
