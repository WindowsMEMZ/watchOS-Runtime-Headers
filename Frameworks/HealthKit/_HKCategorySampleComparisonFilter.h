//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKCategorySampleComparisonFilter_h
#define _HKCategorySampleComparisonFilter_h
@import Foundation;

#include "_HKComparisonFilter.h"

@interface _HKCategorySampleComparisonFilter : _HKComparisonFilter
/* class methods */
+ (BOOL)isSupportedKeyPath:(id)path;
+ (id)allowedDataTypeClassesForKeyPath:(id)path;
+ (id)allowedValueClassesForKeyPath:(id)path;
+ (BOOL)areValidTypes:(id)types forKeyPath:(id)path error:(id *)error;

/* instance methods */
- (BOOL)acceptsDataObject:(id)object;
@end

#endif /* _HKCategorySampleComparisonFilter_h */
