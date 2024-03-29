//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 473.0.1.0.0
//
#ifndef PKApplicationProxy_h
#define PKApplicationProxy_h
@import Foundation;

#include "PKBundleProxy.h"
#include "PKApplicationProxy-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface PKApplicationProxy : PKBundleProxy<PKApplicationProxy>

@property (readonly, nonatomic) NSArray *plugInKitPlugins;
@property (readonly, nonatomic) BOOL placeholder;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSURL *dataContainerURL;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)applicationProxyForBundleURL:(id)url;

/* instance methods */
- (BOOL)isPlaceholder;
@end

#endif /* PKApplicationProxy_h */
