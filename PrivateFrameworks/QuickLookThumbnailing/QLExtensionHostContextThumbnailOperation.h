//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLExtensionHostContextThumbnailOperation_h
#define QLExtensionHostContextThumbnailOperation_h
@import Foundation;

#include "QLAsynchronousOperation.h"
#include "QLThumbnailHostContext.h"
#include "QLThumbnailItem.h"

@class NSDictionary, NSFileCoordinator, NSOperationQueue;
@protocol OS_dispatch_semaphore;

@interface QLExtensionHostContextThumbnailOperation : QLAsynchronousOperation

@property (retain, nonatomic) QLThumbnailHostContext *hostContext;
@property (copy, nonatomic) id /* block */ serviceErrorHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) QLThumbnailItem *item;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) double minimumSize;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long badgeType;
@property (nonatomic) int iconFlavor;
@property (retain, nonatomic) NSDictionary *generatorData;
@property (nonatomic) int interpolationQuality;
@property (nonatomic) BOOL wantsLowQuality;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *generationSemaphore;
@property (retain, nonatomic) NSFileCoordinator *coordinator;
@property (retain, nonatomic) NSOperationQueue *coordinationQueue;
@property (copy, nonatomic) id /* block */ cleanupTemporaryFileHandler;

/* instance methods */
- (id)initWithThumbnailHostContext:(id)context item:(id)item size:(struct CGSize { double x0; double x1; })size minimumSize:(double)size scale:(double)scale badgeType:(unsigned long long)type iconFlavor:(int)flavor generatorData:(id)data interpolationQuality:(int)quality wantsLowQuality:(BOOL)quality completionHandler:(id /* block */)handler serviceErrorHandler:(id /* block */)handler;
- (void)main;
- (void)finish;
@end

#endif /* QLExtensionHostContextThumbnailOperation_h */
