//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHSMutableWidgetExtensionInfo_h
#define CHSMutableWidgetExtensionInfo_h
@import Foundation;

#include "CHSWidgetExtensionInfo.h"

@class NSArray, NSDate, NSObject, NSString, NSURL;

@interface CHSMutableWidgetExtensionInfo : CHSWidgetExtensionInfo

@property (copy, @dynamic, nonatomic) NSString *bundleIdentifier;
@property (copy, @dynamic, nonatomic) NSString *containerBundleIdentifier;
@property (copy, @dynamic, nonatomic) NSString *effectiveContainerBundleIdentifier;
@property (copy, @dynamic, nonatomic) NSString *version;
@property (copy, @dynamic, nonatomic) NSDate *lastModifiedDate;
@property (copy, @dynamic, nonatomic) NSURL *bundleURL;
@property (copy, @dynamic, nonatomic) NSURL *containerURL;
@property (copy, @dynamic, nonatomic) NSURL *systemDataContainerURL;
@property (copy, @dynamic, nonatomic) NSString *dataProtectionLevel;
@property (@dynamic, nonatomic) BOOL isDevelopmentExtension;
@property (@dynamic, nonatomic) BOOL wantsLocation;
@property (copy, @dynamic, nonatomic) NSArray *availableLocalizations;
@property (@dynamic, nonatomic) BOOL allowsMixedLocalizations;
@property (copy, @dynamic, nonatomic) NSString *sdkVersion;
@property (retain, @dynamic, nonatomic) NSObject *entitlements;
@property (copy, @dynamic, nonatomic) NSArray *descriptors;
@property (copy, @dynamic, nonatomic) NSArray *configurations;
@property (copy, @dynamic, nonatomic) NSArray *snapshotURLs;
@property (copy, @dynamic, nonatomic) NSArray *placeholderURLs;
@property (copy, @dynamic, nonatomic) NSArray *timelineURLs;
@property (copy, @dynamic, nonatomic) NSArray *nominatedContainerBundleIdentifiers;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CHSMutableWidgetExtensionInfo_h */
