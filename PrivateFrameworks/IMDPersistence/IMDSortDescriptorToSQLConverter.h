//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDSortDescriptorToSQLConverter_h
#define IMDSortDescriptorToSQLConverter_h
@import Foundation;

@class NSDictionary, NSString;

@interface IMDSortDescriptorToSQLConverter : NSObject

@property (readonly, copy, nonatomic) NSDictionary *keyPathsToColumns;
@property (readonly, copy, nonatomic) NSString *expression;

/* instance methods */
- (id)_columnWithSortDescriptor:(id)descriptor;
- (id)_orderByClauseWithSortDescriptor:(id)descriptor;
- (id)init;
- (id)initWithSortDescriptor:(id)descriptor keyPathsToColumns:(id)columns;
@end

#endif /* IMDSortDescriptorToSQLConverter_h */
