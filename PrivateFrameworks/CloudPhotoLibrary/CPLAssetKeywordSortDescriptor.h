//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLAssetKeywordSortDescriptor_h
#define CPLAssetKeywordSortDescriptor_h
@import Foundation;

#include "NSSortDescriptor.h"

@interface CPLAssetKeywordSortDescriptor : NSSortDescriptor
/* class methods */
+ (id)sortedKeywordsForKeywordSet:(id)set;

/* instance methods */
- (id)init;
- (long long)compareObject:(id)object toObject:(id)object;
- (id)description;
@end

#endif /* CPLAssetKeywordSortDescriptor_h */
