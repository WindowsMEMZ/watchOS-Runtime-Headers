//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef AWDMailSearchSessionReport_h
#define AWDMailSearchSessionReport_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface AWDMailSearchSessionReport : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 messagesLeftToIndex; unsigned int x :1 percentOfMessagesIndexed; unsigned int x :1 timestamp; unsigned int x :1 emailProvider; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *engagements;
@property (nonatomic) BOOL hasMessagesLeftToIndex;
@property (nonatomic) unsigned long long messagesLeftToIndex;
@property (nonatomic) BOOL hasPercentOfMessagesIndexed;
@property (nonatomic) unsigned long long percentOfMessagesIndexed;
@property (nonatomic) BOOL hasEmailProvider;
@property (nonatomic) int emailProvider;

/* class methods */
+ (Class)engagementsType;

/* instance methods */
- (void)clearEngagements;
- (void)addEngagements:(id)engagements;
- (unsigned long long)engagementsCount;
- (id)engagementsAtIndex:(unsigned long long)index;
- (id)emailProviderAsString:(int)string;
- (int)StringAsEmailProvider:(id)provider;
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

#endif /* AWDMailSearchSessionReport_h */
