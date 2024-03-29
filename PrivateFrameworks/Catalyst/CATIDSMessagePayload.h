//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.0.0.0.0
//
#ifndef CATIDSMessagePayload_h
#define CATIDSMessagePayload_h
@import Foundation;

#include "CATDictionaryCodable-Protocol.h"
#include "CATIDSMessage-Protocol.h"
#include "CATIDSMessageMetadata.h"

@class NSDictionary;

@interface CATIDSMessagePayload : NSObject<CATDictionaryCodable>

@property (readonly, nonatomic) CATIDSMessageMetadata *metadata;
@property (readonly, nonatomic) NSObject<CATIDSMessage> *message;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

/* class methods */
+ (id)instanceWithDictionary:(id)dictionary;

/* instance methods */
- (id)initWithMessage:(id)message;
- (id)initWithMetadata:(id)metadata message:(id)message;
- (id)messageContent;
@end

#endif /* CATIDSMessagePayload_h */
