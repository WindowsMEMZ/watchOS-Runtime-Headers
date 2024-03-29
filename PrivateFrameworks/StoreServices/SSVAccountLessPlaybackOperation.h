//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVAccountLessPlaybackOperation_h
#define SSVAccountLessPlaybackOperation_h
@import Foundation;

#include "SSVComplexOperation.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface SSVAccountLessPlaybackOperation : SSVComplexOperation {
  /* instance variables */
  NSMutableDictionary *_httpHeaderFields;
}

@property (copy, nonatomic) NSDictionary *HTTPHeaderFields;
@property (copy, nonatomic) NSString *assetStoreFrontIdentifier;
@property (copy) NSString *itemIdentifier;
@property (copy) id /* block */ responseBlock;

/* instance methods */
- (void)setValue:(id)value forHTTPHeaderField:(id)field;
- (id)valueForHTTPHeaderField:(id)field;
- (void)main;
- (id)_requestBodyData;
@end

#endif /* SSVAccountLessPlaybackOperation_h */
