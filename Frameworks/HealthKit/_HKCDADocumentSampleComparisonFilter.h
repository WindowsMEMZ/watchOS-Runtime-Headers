//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKCDADocumentSampleComparisonFilter_h
#define _HKCDADocumentSampleComparisonFilter_h
@import Foundation;

#include "_HKComparisonFilter.h"

@class NSRegularExpression;

@interface _HKCDADocumentSampleComparisonFilter : _HKComparisonFilter {
  /* instance variables */
  NSRegularExpression *_comparisonExpression;
}

/* class methods */
+ (BOOL)isSupportedKeyPath:(id)path;
+ (id)allowedDataTypeClassesForKeyPath:(id)path;
+ (id)allowedValueClassesForKeyPath:(id)path;
+ (BOOL)areValidTypes:(id)types forKeyPath:(id)path error:(id *)error;
+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)type forKeyPath:(id)path;

/* instance methods */
- (void)configureInMemoryFilter;
- (BOOL)acceptsDataObject:(id)object;
@end

#endif /* _HKCDADocumentSampleComparisonFilter_h */
