//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLResourceTypeSet_h
#define CPLResourceTypeSet_h
@import Foundation;

@interface CPLResourceTypeSet : NSObject {
  /* instance variables */
  unsigned long long _baseTypesBits;
  unsigned long long _extraTypeBits;
}

@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) unsigned long long count;

/* instance methods */
- (BOOL)isEmpty;
- (void)addResourceType:(unsigned long long)type;
- (void)removeResourceType:(unsigned long long)type;
- (BOOL)containsResourceType:(unsigned long long)type;
- (void)enumerateResourceTypesWithBlock:(id /* block */)block;
- (id)intersectionWithSet:(id)set;
- (BOOL)intersectsWithSet:(id)set;
- (id)unionSet:(id)set;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)redactedDescription;
@end

#endif /* CPLResourceTypeSet_h */
