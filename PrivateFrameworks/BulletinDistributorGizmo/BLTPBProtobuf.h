//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTPBProtobuf_h
#define BLTPBProtobuf_h
@import Foundation;

#include "IDSProtobuf.h"

@class IDSProtobuf, PBCodable;

@interface BLTPBProtobuf : IDSProtobuf

@property (retain, nonatomic) IDSProtobuf *idsProtobuf;
@property (retain, nonatomic) PBCodable *protobuf;
@property (readonly, nonatomic) long long sequenceNumberError;
@property (readonly, nonatomic) unsigned long long sessionState;

/* instance methods */
- (id)initWithProtobuf:(id)protobuf type:(unsigned short)type isResponse:(BOOL)response sequenceNumberManager:(id)manager;
- (id)initWithIDSProtobuf:(id)idsprotobuf sequenceNumberManager:(id)manager;
@end

#endif /* BLTPBProtobuf_h */
