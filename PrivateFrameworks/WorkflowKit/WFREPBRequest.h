//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFREPBRequest_h
#define WFREPBRequest_h
@import Foundation;

#include "PBRequest.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface WFREPBRequest : PBRequest<NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) int version;
@property (retain, nonatomic) NSData *message;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* WFREPBRequest_h */
