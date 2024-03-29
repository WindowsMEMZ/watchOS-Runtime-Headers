//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTBaseEventDataProvider_h
#define MTBaseEventDataProvider_h
@import Foundation;

#include "MTEventDataProvider.h"

@protocol MTBaseEventDataProviderDelegate;

@interface MTBaseEventDataProvider : MTEventDataProvider

@property (weak, @dynamic, nonatomic) NSObject<MTBaseEventDataProviderDelegate> *delegate;

/* instance methods */
- (id)knownFields;
- (id)app:(id)app;
- (id)appVersion:(id)version;
- (id)baseVersion:(id)version;
- (id)capacityData:(id)data;
- (id)capacityDataAvailable:(id)available;
- (id)capacityDisk:(id)disk;
- (id)capacitySystem:(id)system;
- (id)capacitySystemAvailable:(id)available;
- (id)fetchAllCookies;
- (id)clientEventId:(id)id;
- (id)clientId:(id)id;
- (id)connection:(id)connection;
- (id)cookies:(id)cookies;
- (id)dsId:(id)id;
- (id)eventTime:(id)time;
- (id)hardwareFamily:(id)family;
- (id)hardwareModel:(id)model;
- (id)hostApp:(id)app;
- (id)hostAppVersion:(id)version;
- (id)isSignedIn:(id)in;
- (id)os:(id)os;
- (id)osBuildNumber:(id)number;
- (id)osVersion:(id)version;
- (id)page:(id)page;
- (id)pageContext:(id)context;
- (id)pageDetails:(id)details;
- (id)pageId:(id)id;
- (id)pageType:(id)type;
- (id)pageUrl:(id)url;
- (id)parentPageUrl:(id)url;
- (id)pixelRatio:(id)ratio;
- (id)resourceRevNum:(id)num;
- (id)screenHeight:(id)height;
- (id)screenWidth:(id)width;
- (id)storeFrontHeader:(id)header;
- (id)timezoneOffset:(id)offset;
- (id)userAgent:(id)agent;
- (id)windowInnerHeight:(id)height;
- (id)windowInnerWidth:(id)width;
- (id)windowOuterHeight:(id)height;
- (id)windowOuterWidth:(id)width;
- (id)xpPostFrequency:(id)frequency;
- (id)xpSendMethod:(id)method;
- (id)xpVersionMetricsKit:(id)kit;
@end

#endif /* MTBaseEventDataProvider_h */
