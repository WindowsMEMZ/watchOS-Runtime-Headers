//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 614.60.3.0.0
//
#ifndef OSAProxyConfiguration_h
#define OSAProxyConfiguration_h
@import Foundation;

@class NSDictionary, NSString;

@interface OSAProxyConfiguration : NSObject {
  /* instance variables */
  NSString *_productBuildString;
  NSString *_productReleaseString;
  NSString *_serialNumber;
}

@property (readonly) NSString *logPath;
@property (readonly) NSString *identifier;
@property (readonly) BOOL isProxy;
@property (readonly) BOOL isInternalBridge;
@property (readonly) NSString *modelCode;
@property (readonly) NSString *productVersion;
@property (readonly) NSString *buildVersion;
@property (readonly) NSString *osTrain;
@property (readonly) NSString *productName;
@property (readonly) NSString *productNameVersionBuildString;
@property (readonly) NSString *targetAudience;
@property (readonly) NSString *uiCountryCode;
@property (readonly) NSString *systemId;
@property (readonly) NSString *internalKey;
@property (readonly) NSString *crashReporterKey;
@property (readonly) NSString *awdReporterKey;
@property (readonly) NSString *releaseType;
@property (readonly) NSString *seedGroup;
@property (readonly) NSString *experimentGroup;
@property (readonly) NSString *automatedDeviceGroup;
@property (readonly) NSString *automatedContextURL;
@property (readonly) NSDictionary *currentTaskingIDByRouting;

/* instance methods */
- (id)init:(id)init fromMetadata:(id)metadata;
- (id)initFromPath:(id)path;
- (id)assembleMetadataAt:(double)at withOptions:(unsigned int)options;
- (id)metadata;
- (id)description;
- (BOOL)usesLegacySubmission:(id)submission;
- (BOOL)isConfigEnabled:(id)enabled;
- (BOOL)isFile:(id)file validForSubmission:(id)submission reasonableSize:(long long)size to:(id)to internalTypes:(id)types result:(const char * *)result;
@end

#endif /* OSAProxyConfiguration_h */
