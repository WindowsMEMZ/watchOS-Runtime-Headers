//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.0.0.0.0
//
#ifndef C2MPPathInfo_h
#define C2MPPathInfo_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface C2MPPathInfo : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 applicationBytesReceived; unsigned int x :1 applicationBytesSent; } _has;
}

@property (readonly, nonatomic) BOOL hasInterfaceType;
@property (retain, nonatomic) NSString *interfaceType;
@property (readonly, nonatomic) BOOL hasRadioType;
@property (retain, nonatomic) NSString *radioType;
@property (nonatomic) BOOL hasApplicationBytesSent;
@property (nonatomic) unsigned long long applicationBytesSent;
@property (nonatomic) BOOL hasApplicationBytesReceived;
@property (nonatomic) unsigned long long applicationBytesReceived;

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

#endif /* C2MPPathInfo_h */
