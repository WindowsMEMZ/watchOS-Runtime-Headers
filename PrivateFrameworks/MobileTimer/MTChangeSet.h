//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTChangeSet_h
#define MTChangeSet_h
@import Foundation;

@class NSArray, NSDictionary, NSSet;

@interface MTChangeSet : NSObject

@property (retain, nonatomic) NSSet *changedProperties;
@property (retain, nonatomic) NSDictionary *changeDictionary;
@property (readonly, nonatomic) NSArray *changes;

/* class methods */
+ (id)dictionaryFromChanges:(id)changes;
+ (id)changeSetWithChangesFromObject:(id)object toObject:(id)object;
+ (id)changeSetWithChangesFromObject:(id)object toObject:(id)object inProperties:(id)properties;

/* instance methods */
- (id)initWithChanges:(id)changes;
- (id)initWithChangeDictionary:(id)dictionary;
- (BOOL)_isEqualToChangeSet:(id)set checkOriginalValues:(BOOL)values;
- (BOOL)isEquivalentToChangeSet:(id)set;
- (BOOL)isEqual:(id)equal;
- (id)changeSetByAddingChangeSet:(id)set;
- (BOOL)hasChangesInProperties:(id)properties;
- (BOOL)hasChangeForProperty:(id)property;
- (BOOL)hasChangesInCommonWithChangeSet:(id)set;
- (id)changedValueForProperty:(id)property hasProperty:(BOOL *)property;
- (id)deserializedChangedValueForProperty:(id)property hasProperty:(BOOL *)property;
- (id)_deserializer;
- (id)description;
@end

#endif /* MTChangeSet_h */
