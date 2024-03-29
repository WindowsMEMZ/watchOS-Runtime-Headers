//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRContentItemMetadataAudioRoute_h
#define MRContentItemMetadataAudioRoute_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface MRContentItemMetadataAudioRoute : NSObject<NSCopying>

@property (readonly, nonatomic) _MRAudioRouteProtobuf *protobuf;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasSupportsSpatialization;
@property (nonatomic) BOOL supportsSpatialization;
@property (nonatomic) BOOL hasSpatializationEnabled;
@property (nonatomic) BOOL spatializationEnabled;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

/* instance methods */
- (id)initWithProtobuf:(id)protobuf;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isSpatializationEnabled;
@end

#endif /* MRContentItemMetadataAudioRoute_h */
