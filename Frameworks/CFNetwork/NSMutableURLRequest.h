//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1490.0.4.0.0
//
#ifndef NSMutableURLRequest_h
#define NSMutableURLRequest_h
@import Foundation;

#include "NSURLRequest.h"

@class NSData, NSDictionary, NSInputStream, NSString, NSURL;

@interface NSMutableURLRequest : NSURLRequest

@property (copy) NSString *HTTPMethod;
@property (copy) NSDictionary *allHTTPHeaderFields;
@property (copy) NSData *HTTPBody;
@property (retain) NSInputStream *HTTPBodyStream;
@property BOOL HTTPShouldHandleCookies;
@property BOOL HTTPShouldUsePipelining;
@property (copy, @dynamic) NSURL *URL;
@property (@dynamic) unsigned long long cachePolicy;
@property (@dynamic) double timeoutInterval;
@property (copy, @dynamic) NSURL *mainDocumentURL;
@property (@dynamic) unsigned long long networkServiceType;
@property (@dynamic) BOOL allowsCellularAccess;
@property (@dynamic) BOOL allowsExpensiveNetworkAccess;
@property (@dynamic) BOOL allowsConstrainedNetworkAccess;
@property (@dynamic) BOOL assumesHTTP3Capable;
@property (@dynamic) unsigned long long attribution;
@property (@dynamic) BOOL requiresDNSSECValidation;

/* instance methods */
- (void)setValue:(id)value forHTTPHeaderField:(id)field;
- (void)addValue:(id)value forHTTPHeaderField:(id)field;
- (void)setHTTPContentType:(id)type;
- (void)setHTTPExtraCookies:(id)cookies;
- (void)setHTTPReferrer:(id)httpreferrer;
- (void)setHTTPUserAgent:(id)agent;
- (void)setRequestPriority:(unsigned long long)priority;
- (unsigned long long)requestPriority;
- (void)setExpectedWorkload:(unsigned long long)workload;
- (void)_setTimeWindowDelay:(double)delay;
- (void)_setTimeWindowDuration:(double)duration;
- (void)_setStartTimeoutDate:(id)date;
- (void)_setRequiresShortConnectionTimeout:(BOOL)timeout;
- (void)_setPreventHSTSStorage:(BOOL)hstsstorage;
- (void)_setIgnoreHSTS:(BOOL)hsts;
- (void)_setPayloadTransmissionTimeout:(double)timeout;
- (void)setContentDispositionEncodingFallbackArray:(id)array;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)setBoundInterfaceIdentifier:(id)identifier;
- (void)_setKnownTracker:(BOOL)tracker;
- (void)_setNeedsNetworkTrackingPrevention:(BOOL)prevention;
- (void)_setNonAppInitiated:(BOOL)initiated;
- (void)set_trackerContext:(id)context;
- (void)_setPrivacyProxyFailClosed:(BOOL)closed;
- (void)_setPrivacyProxyFailClosedForUnreachableNonMainHosts:(BOOL)hosts;
- (void)_setPrivacyProxyFailClosedForUnreachableHosts:(BOOL)hosts;
- (void)_setProhibitPrivacyProxy:(BOOL)proxy;
- (void)_setAllowPrivateAccessTokensForThirdParty:(BOOL)party;
- (void)_setUseEnhancedPrivacyMode:(BOOL)mode;
- (void)_setBlockTrackers:(BOOL)trackers;
- (void)_setFailInsecureLoadWithHTTPSDNSRecord:(BOOL)httpsdnsrecord;
- (void)_setWebSearchContent:(BOOL)content;
- (void)_removeAllProtocolProperties;
- (BOOL)_explicitlySetShouldHandleCookies;
- (BOOL)_explicitlySetCachePolicy;
- (BOOL)_explicitlySetTimeoutInterval;
- (BOOL)_explicitlySetNetworkServiceType;
- (BOOL)_explicitlySetAllowsCellularAccess;
- (BOOL)_explicitlySetAllowsExpensiveNetworkAccess;
- (BOOL)_explicitlySetAllowsConstrainedNetworkAccess;
- (BOOL)_explicitlySetPreventsIdleSystemSleep;
- (BOOL)_explicitlySetProxySettings;
- (BOOL)_explicitlySetSSLProperties;
@end

#endif /* NSMutableURLRequest_h */
