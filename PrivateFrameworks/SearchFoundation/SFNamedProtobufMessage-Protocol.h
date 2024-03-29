//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFNamedProtobufMessage_Protocol_h
#define SFNamedProtobufMessage_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFNamedProtobufMessage-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol SFNamedProtobufMessage <NSObject>

@property (copy, nonatomic) NSData *protobufMessageData;
@property (copy, nonatomic) NSString *protobufMessageName;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;

@end

#endif /* SFNamedProtobufMessage_Protocol_h */
