//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFContentSortDescriptor_h
#define WFContentSortDescriptor_h
@import Foundation;

#include "WFContentProperty.h"
#include "WFContentPropertyContainer-Protocol.h"

@class NSSet;

@interface WFContentSortDescriptor : NSObject<WFContentPropertyContainer>

@property (readonly, nonatomic) WFContentProperty *property;
@property (readonly, copy, nonatomic) id /* block */ comparator;
@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) NSSet *containedProperties;

/* class methods */
+ (id)sortDescriptorWithProperty:(id)property ascending:(BOOL)ascending comparator:(id /* block */)comparator;
+ (id)randomSortDescriptor;

/* instance methods */
- (id)initWithProperty:(id)property ascending:(BOOL)ascending comparator:(id /* block */)comparator;
- (id)description;
@end

#endif /* WFContentSortDescriptor_h */
