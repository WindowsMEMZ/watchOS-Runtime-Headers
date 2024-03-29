//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BCCloudKitConfiguration_h
#define BCCloudKitConfiguration_h
@import Foundation;

#include "BCContainerConfiguration-Protocol.h"

@class NSArray, NSString;

@interface BCCloudKitConfiguration : NSObject<BCContainerConfiguration>

@property (retain, nonatomic) NSString *queueIdentifier;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) NSArray *appZones;
@property (retain, nonatomic) NSArray *serviceZones;
@property (retain, nonatomic) NSString *dbArchiveFolderName;
@property (retain, nonatomic) NSString *dbArchiveExtension;
@property (retain, nonatomic) NSString *dbArchiveFilename;
@property (retain, nonatomic) NSString *dbSubscriptionID;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (nonatomic) BOOL requiresDeviceToDeviceEncryption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)configuration;

/* instance methods */
- (BOOL)shouldArchiveData:(id)data;
- (BOOL)shouldPerformDatabaseSubscriptionForServiceMode:(BOOL)mode;
@end

#endif /* BCCloudKitConfiguration_h */
