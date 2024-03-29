//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBSearchForMediaIntent_Protocol_h
#define _INPBSearchForMediaIntent_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBIntentMetadata.h"
#include "_INPBMediaSearch.h"
#include "_INPBPrivateSearchForMediaIntentData.h"
#include "_INPBSearchForMediaIntent-Protocol.h"

@class NSArray, NSString;

@protocol _INPBSearchForMediaIntent <NSObject>

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (copy, nonatomic) NSArray *mediaItems;
@property (readonly, nonatomic) unsigned long long mediaItemsCount;
@property (retain, nonatomic) _INPBMediaSearch *mediaSearch;
@property (readonly, nonatomic) BOOL hasMediaSearch;
@property (retain, nonatomic) _INPBPrivateSearchForMediaIntentData *privateSearchForMediaIntentData;
@property (readonly, nonatomic) BOOL hasPrivateSearchForMediaIntentData;

/* class methods */
+ (Class)mediaItemsType;
/* instance methods */
- (void)clearMediaItems;
- (void)addMediaItems:(id)items;
- (id)mediaItemsAtIndex:(unsigned long long)index;
@end

#endif /* _INPBSearchForMediaIntent_Protocol_h */
