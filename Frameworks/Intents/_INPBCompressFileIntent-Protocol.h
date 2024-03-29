//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBCompressFileIntent_Protocol_h
#define _INPBCompressFileIntent_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBCompressFileIntent-Protocol.h"
#include "_INPBIntentMetadata.h"
#include "_INPBString.h"

@class NSString;

@protocol _INPBCompressFileIntent <NSObject>

@property (retain, nonatomic) _INPBString *entityName;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) BOOL hasEntityType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;

/* instance methods */
- (id)entityTypeAsString:(int)string;
- (int)StringAsEntityType:(id)type;
@end

#endif /* _INPBCompressFileIntent_Protocol_h */
