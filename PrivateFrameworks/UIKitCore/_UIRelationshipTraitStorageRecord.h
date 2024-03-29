//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIRelationshipTraitStorageRecord_h
#define _UIRelationshipTraitStorageRecord_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "UITraitCollection.h"

@class NSSet;

@interface _UIRelationshipTraitStorageRecord : NSObject<NSCoding>

@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) NSSet *addedObjects;
@property (readonly, nonatomic) NSSet *removedObjects;

/* instance methods */
- (id)initWithTraitCollection:(id)collection addedObjects:(id)objects removedObjects:(id)objects;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* _UIRelationshipTraitStorageRecord_h */
