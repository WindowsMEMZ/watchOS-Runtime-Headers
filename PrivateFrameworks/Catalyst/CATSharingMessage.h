//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.0.0.0.0
//
#ifndef CATSharingMessage_h
#define CATSharingMessage_h
@import Foundation;

#include "CATDictionaryCodable-Protocol.h"

@class NSDictionary;

@interface CATSharingMessage : NSObject<CATDictionaryCodable>

@property (readonly, nonatomic) long long messageType;
@property (readonly, copy, nonatomic) NSDictionary *contentDictionaryValue;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

/* class methods */
+ (id)instanceWithDictionary:(id)dictionary;

/* instance methods */
- (id)initWithContentMessage:(id)message;
- (id)initWithMessageType:(long long)type contentDictionary:(id)dictionary;
@end

#endif /* CATSharingMessage_h */
