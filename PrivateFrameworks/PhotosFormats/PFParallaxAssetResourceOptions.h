//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFParallaxAssetResourceOptions_h
#define PFParallaxAssetResourceOptions_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface PFParallaxAssetResourceOptions : NSObject

@property (nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (nonatomic) BOOL aspectFit;
@property (copy, nonatomic) id /* block */ canHandleAdjustmentData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (copy, nonatomic) id /* block */ downloadProgressHandler;
@property (nonatomic) BOOL networkAccessAllowed;
@property (nonatomic) long long priority;

/* instance methods */
@end

#endif /* PFParallaxAssetResourceOptions_h */
