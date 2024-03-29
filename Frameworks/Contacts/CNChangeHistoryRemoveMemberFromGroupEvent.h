//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNChangeHistoryRemoveMemberFromGroupEvent_h
#define CNChangeHistoryRemoveMemberFromGroupEvent_h
@import Foundation;

#include "CNChangeHistoryEvent.h"
#include "CNContact.h"
#include "CNGroup.h"

@interface CNChangeHistoryRemoveMemberFromGroupEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *member;
@property (readonly, nonatomic) CNGroup *group;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

/* instance methods */
- (id)init;
- (id)initWithMember:(id)member group:(id)group;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (void)acceptEventVisitor:(id)visitor;
- (long long)comparisonResultWithinSameClass:(id)class;
@end

#endif /* CNChangeHistoryRemoveMemberFromGroupEvent_h */
