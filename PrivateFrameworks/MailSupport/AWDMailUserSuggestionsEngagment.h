//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef AWDMailUserSuggestionsEngagment_h
#define AWDMailUserSuggestionsEngagment_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface AWDMailUserSuggestionsEngagment : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 searchTermLength; unsigned int x :1 topHitsPresent; unsigned int x :1 userSelectedTopHit; } _has;
}

@property (nonatomic) BOOL hasTopHitsPresent;
@property (nonatomic) BOOL topHitsPresent;
@property (nonatomic) BOOL hasUserSelectedTopHit;
@property (nonatomic) BOOL userSelectedTopHit;
@property (nonatomic) BOOL hasSearchTermLength;
@property (nonatomic) long long searchTermLength;

/* instance methods */
- (id)initWithSearchTermLength:(unsigned long long)length topHitsPresent:(BOOL)present userSelectedTopHit:(BOOL)hit;
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

#endif /* AWDMailUserSuggestionsEngagment_h */
