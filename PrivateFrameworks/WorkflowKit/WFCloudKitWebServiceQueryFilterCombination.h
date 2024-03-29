//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFCloudKitWebServiceQueryFilterCombination_h
#define WFCloudKitWebServiceQueryFilterCombination_h
@import Foundation;

#include "WFCloudKitWebServiceQueryFilter.h"

@class NSArray;

@interface WFCloudKitWebServiceQueryFilterCombination : WFCloudKitWebServiceQueryFilter

@property (retain, nonatomic) NSArray *filters;
@property (nonatomic) unsigned long long type;

/* instance methods */
- (id)stringRepresentationWithRecordType:(id)type;
@end

#endif /* WFCloudKitWebServiceQueryFilterCombination_h */
