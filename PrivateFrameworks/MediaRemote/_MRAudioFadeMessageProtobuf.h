//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef _MRAudioFadeMessageProtobuf_h
#define _MRAudioFadeMessageProtobuf_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "_MRNowPlayingPlayerPathProtobuf.h"

@interface _MRAudioFadeMessageProtobuf : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 fadeType; } _has;
}

@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic) BOOL hasFadeType;
@property (nonatomic) int fadeType;

/* instance methods */
- (id)fadeTypeAsString:(int)string;
- (int)StringAsFadeType:(id)type;
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

#endif /* _MRAudioFadeMessageProtobuf_h */
