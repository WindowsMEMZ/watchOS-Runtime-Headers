//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSContextualDuetEvent_h
#define TPSContextualDuetEvent_h
@import Foundation;

#include "TPSContextualEvent.h"
#include "TPSContextualDuetEventMeta.h"
#include "TPSContextualDuetEventSource.h"
#include "TPSContextualDuetEventValue.h"

@class NSArray, NSString;

@interface TPSContextualDuetEvent : TPSContextualEvent

@property (copy, nonatomic) NSString *stream;
@property (nonatomic) long long storeType;
@property (copy, nonatomic) NSArray *groupByKeyPaths;
@property (copy, nonatomic) TPSContextualDuetEventMeta *meta;
@property (copy, nonatomic) TPSContextualDuetEventSource *source;
@property (copy, nonatomic) TPSContextualDuetEventValue *value;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (long long)_defaultStoreTypeForStream:(id)stream;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)newStateFromStateDictionary:(id)dictionary;
- (id)debugDescription;
@end

#endif /* TPSContextualDuetEvent_h */
