//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef _MRNowPlayingClientProtobuf_h
#define _MRNowPlayingClientProtobuf_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "_MRColorProtobuf.h"

@class NSMutableArray, NSString;

@interface _MRNowPlayingClientProtobuf : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 nowPlayingVisibility; unsigned int x :1 processIdentifier; unsigned int x :1 processUserIdentifier; unsigned int x :1 isEmptyDeprecated; } _has;
}

@property (nonatomic) BOOL hasProcessIdentifier;
@property (nonatomic) int processIdentifier;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL hasParentApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *parentApplicationBundleIdentifier;
@property (nonatomic) BOOL hasProcessUserIdentifier;
@property (nonatomic) int processUserIdentifier;
@property (nonatomic) BOOL hasNowPlayingVisibility;
@property (nonatomic) int nowPlayingVisibility;
@property (readonly, nonatomic) BOOL hasTintColor;
@property (retain, nonatomic) _MRColorProtobuf *tintColor;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSMutableArray *extendedBundleIdentifierHierarchys;
@property (nonatomic) BOOL hasIsEmptyDeprecated;
@property (nonatomic) BOOL isEmptyDeprecated;
@property (readonly, nonatomic) BOOL hasIconURL;
@property (retain, nonatomic) NSString *iconURL;

/* class methods */
+ (Class)extendedBundleIdentifierHierarchyType;

/* instance methods */
- (id)nowPlayingVisibilityAsString:(int)string;
- (int)StringAsNowPlayingVisibility:(id)visibility;
- (void)clearExtendedBundleIdentifierHierarchys;
- (void)addExtendedBundleIdentifierHierarchy:(id)hierarchy;
- (unsigned long long)extendedBundleIdentifierHierarchysCount;
- (id)extendedBundleIdentifierHierarchyAtIndex:(unsigned long long)index;
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

#endif /* _MRNowPlayingClientProtobuf_h */
