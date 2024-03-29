//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTConvenienceEnvironmentDelegate_h
#define MTConvenienceEnvironmentDelegate_h
@import Foundation;

#include "MTEnvironmentStoreDelegate.h"

@interface MTConvenienceEnvironmentDelegate : MTEnvironmentStoreDelegate

@property (copy, nonatomic) id /* block */ _pageURLBlock;
@property (copy, nonatomic) id /* block */ _resourceRevNumBlock;
@property (copy, nonatomic) id /* block */ _hostAppBlock;

/* instance methods */
- (id)init;
- (id)initWithPageURLBlock:(id /* block */)urlblock resourceRevNumBlock:(id /* block */)block hostAppBlock:(id /* block */)block;
- (id)hostApp;
- (id)pageUrl;
- (id)resourceRevNum;
@end

#endif /* MTConvenienceEnvironmentDelegate_h */
