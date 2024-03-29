//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKMultiKeyValueRow_h
#define PKMultiKeyValueRow_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "PKPayLaterCollectionViewRow-Protocol.h"

@class NSArray, NSString;

@interface PKMultiKeyValueRow : NSObject<PKPayLaterCollectionViewRow> {
  /* instance variables */
  NSArray *_sources;
}

@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initKeyValueSources:(id)sources;
- (Class)cellClass;
- (void)configureCell:(id)cell;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PKMultiKeyValueRow_h */
