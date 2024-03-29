//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 488.1.0.0.0
//
#ifndef FMFMapSession_h
#define FMFMapSession_h
@import Foundation;

#include "FMFMapCache.h"

@class NSXPCConnection;

@interface FMFMapSession : NSObject

@property (retain, nonatomic) FMFMapCache *mapCache;
@property (retain, nonatomic) NSXPCConnection *connection;

/* class methods */
+ (id)sharedInstance;
+ (id)newConnection;

/* instance methods */
- (void)gridImageForWidth:(double)width height:(double)height cache:(BOOL)cache andCompletion:(id /* block */)completion;
- (void)mapImageForLocation:(id)location radius:(double)radius width:(double)width height:(double)height cache:(BOOL)cache andCompletion:(id /* block */)completion;
- (void)mapImageForLocation:(id)location isShifted:(BOOL)shifted radius:(double)radius width:(double)width height:(double)height cache:(BOOL)cache andCompletion:(id /* block */)completion;
- (void)noLocationImageForWidth:(double)width height:(double)height cache:(BOOL)cache andCompletion:(id /* block */)completion;
- (void)mapImageForLocation:(id)location altitude:(double)altitude pitch:(double)pitch width:(double)width height:(double)height cache:(BOOL)cache andCompletion:(id /* block */)completion;
- (void)mapImageForLocation:(id)location isShifted:(BOOL)shifted altitude:(double)altitude pitch:(double)pitch width:(double)width height:(double)height cache:(BOOL)cache andCompletion:(id /* block */)completion;
- (void)mapImageForRequest:(id)request andCompletion:(id /* block */)completion;
- (void)gridImageForScreenRatio:(double)ratio andCompletion:(id /* block */)completion;
- (void)noLocationImageForScreenRatio:(double)ratio andCompletion:(id /* block */)completion;
- (void)mapImageForLocation:(id)location altitude:(double)altitude pitch:(double)pitch screenRatio:(double)ratio andCompletion:(id /* block */)completion;
- (void)mapImageForLocation:(id)location isShifted:(BOOL)shifted altitude:(double)altitude pitch:(double)pitch screenRatio:(double)ratio andCompletion:(id /* block */)completion;
@end

#endif /* FMFMapSession_h */
