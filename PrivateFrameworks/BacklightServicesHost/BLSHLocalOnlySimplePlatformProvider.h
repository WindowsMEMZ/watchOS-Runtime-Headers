//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHLocalOnlySimplePlatformProvider_h
#define BLSHLocalOnlySimplePlatformProvider_h
@import Foundation;

#include "BLSHBacklightEnvironmentSessionProviding-Protocol.h"
#include "BLSHBacklightPlatformProvider-Protocol.h"
#include "BLSHFlipbookSpecification.h"
#include "BLSHServicePlatformProvider-Protocol.h"

@class NSString;
@protocol BLSHFlipbookTelemetry;

@interface BLSHLocalOnlySimplePlatformProvider : NSObject<BLSHBacklightPlatformProvider, BLSHBacklightEnvironmentSessionProviding, BLSHServicePlatformProvider>

@property (readonly, nonatomic) double backlightFadeInDuration;
@property (readonly, nonatomic) double backlightFadeOutDuration;
@property (readonly, nonatomic) NSObject<BLSHBacklightEnvironmentSessionProviding> *sessionProvider;
@property (readonly, nonatomic) BOOL showingBlankingWindow;
@property (readonly, nonatomic) BOOL alwaysOnEnabled;
@property (readonly, nonatomic) BLSHFlipbookSpecification *flipbookSpecification;
@property (readonly, nonatomic) NSObject<BLSHFlipbookTelemetry> *flipbookTelemetryDelegate;
@property (readonly, nonatomic) BOOL useAlwaysOnBrightnessCurve;
@property (readonly, nonatomic) float backlightDimmedFactor;
@property (readonly, nonatomic) double backlightDimmingDuration;
@property (readonly, nonatomic) BOOL suppressionSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<BLSHBacklightPlatformProvider> *backlightPlatformProvider;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (BOOL)isShowingBlankingWindow;
- (void)showBlankingWindow:(BOOL)window withFadeDuration:(double)duration;
- (id)createInactiveEnvironmentSession;
@end

#endif /* BLSHLocalOnlySimplePlatformProvider_h */
