//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 936.60.10.0.0
//
#ifndef MADownloadOptions_h
#define MADownloadOptions_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSDictionary, NSMutableDictionary, NSString;

@interface MADownloadOptions : NSObject<NSSecureCoding>

@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) long long timeoutIntervalForResource;
@property (nonatomic) BOOL discretionary;
@property (nonatomic) BOOL disableUI;
@property (nonatomic) BOOL allowsExpensiveAccess;
@property (nonatomic) BOOL requiresPowerPluggedIn;
@property (nonatomic) BOOL canUseLocalCacheServer;
@property (nonatomic) BOOL prefersInfraWiFi;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSMutableDictionary *additionalServerParams;
@property (retain, nonatomic) NSDictionary *analyticsData;
@property (nonatomic) BOOL liveServerCatalogOnly;
@property (nonatomic) BOOL liveServerCatalogOnlyIsOverridden;
@property (retain, nonatomic) NSString *downloadAuthorizationHeader;
@property (retain, nonatomic) NSData *decryptionKey;
@property (retain, nonatomic) NSString *sourceDirectory;
@property (nonatomic) BOOL allowDaemonConnectionRetries;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithPlist:(id)plist;
- (void)encodeWithCoder:(id)coder;
- (id)encodeAsPlist;
- (id)description;
- (id)tightSummaryIncludingAdditional:(BOOL)additional;
- (void)logOptions;
@end

#endif /* MADownloadOptions_h */
