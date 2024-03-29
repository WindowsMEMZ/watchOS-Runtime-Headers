//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMReminderFetchMetadata_h
#define REMReminderFetchMetadata_h
@import Foundation;

#include "REMFetchMetadata.h"

@class NSArray, NSDictionary;

@interface REMReminderFetchMetadata : REMFetchMetadata

@property (readonly, nonatomic) NSDictionary *subtaskCounts;
@property (readonly, nonatomic) NSArray *dueDateCounts;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSubtaskCounts:(id)counts;
- (id)initWithDueDateCounts:(id)counts;
- (id)initWithSubtaskCounts:(id)counts dueDateCounts:(id)counts;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* REMReminderFetchMetadata_h */
