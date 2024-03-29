//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSContextualCondition_h
#define TPSContextualCondition_h
@import Foundation;

#include "TPSSerializableObject.h"

@class NSArray, NSDate;

@interface TPSContextualCondition : TPSSerializableObject

@property (nonatomic) unsigned long long joinType;
@property (copy, nonatomic) NSArray *rules;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDate *matchedDate;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)eventsForConditionDictionary:(id)dictionary;

/* instance methods */
- (id)initWithDictionary:(id)dictionary type:(unsigned long long)type;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)eventIdentifiers;
- (void)restartTracking;
- (id)debugDescription;
@end

#endif /* TPSContextualCondition_h */
