//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFVisibleResultsFeedback_h
#define SFVisibleResultsFeedback_h
@import Foundation;

#include "SFFeedback.h"
#include "NSCopying-Protocol.h"
#include "SFSearchResult.h"

@class NSArray;

@interface SFVisibleResultsFeedback : SFFeedback<NSCopying>

@property (copy, nonatomic) NSArray *results;
@property (nonatomic) unsigned long long triggerEvent;
@property (retain, nonatomic) SFSearchResult *goTakeoverResult;
@property (retain, nonatomic) NSArray *uniqueIdsOfVisibleButtons;
@property (retain, nonatomic) NSArray *uniqueIdentifiersOfVisibleCardSections;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithResults:(id)results triggerEvent:(unsigned long long)event visibleButtons:(id)buttons visibleCardSections:(id)sections;
- (id)initWithResults:(id)results triggerEvent:(unsigned long long)event;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* SFVisibleResultsFeedback_h */
