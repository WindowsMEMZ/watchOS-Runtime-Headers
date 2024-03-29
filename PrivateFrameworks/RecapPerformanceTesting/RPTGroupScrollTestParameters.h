//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 47.1.0.0.0
//
#ifndef RPTGroupScrollTestParameters_h
#define RPTGroupScrollTestParameters_h
@import Foundation;

#include "RPTBlockBasedScrollTestParameters-Protocol.h"
#include "RPTTestParameters-Protocol.h"

@class NSArray, NSString;

@interface RPTGroupScrollTestParameters : NSObject<RPTBlockBasedScrollTestParameters, RPTTestParameters>

@property (copy, nonatomic) NSArray *parameters;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *testName;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newWithTestName:(id)name parameters:(id)parameters completionHandler:(id /* block */)handler;

/* instance methods */
- (void)prepareWithComposer:(id)composer;
- (id /* block */)composerBlock;
@end

#endif /* RPTGroupScrollTestParameters_h */
