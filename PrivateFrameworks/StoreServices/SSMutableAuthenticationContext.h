//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSMutableAuthenticationContext_h
#define SSMutableAuthenticationContext_h
@import Foundation;

#include "SSAuthenticationContext.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "SSXPCCoding-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SSMutableAuthenticationContext : SSAuthenticationContext<SSXPCCoding, NSCopying, NSMutableCopying>

@property (@dynamic, nonatomic) BOOL allowsBioAuthentication;
@property (@dynamic, nonatomic) BOOL allowsBootstrapCellularData;
@property (copy, @dynamic, nonatomic) NSString *cancelButtonLabel;
@property (copy, @dynamic, nonatomic) NSString *clientIdentifierHeader;
@property (@dynamic, nonatomic) BOOL demoAccount;
@property (@dynamic, nonatomic) BOOL displaysOnLockScreen;
@property (@dynamic, nonatomic) BOOL forceDaemonAuthentication;
@property (copy, nonatomic) NSString *logUUID;
@property (copy, @dynamic, nonatomic) NSString *okButtonLabel;
@property (@dynamic, nonatomic) BOOL persistsAcrossDeviceLock;
@property (copy, @dynamic, nonatomic) NSString *promptTitle;
@property (copy, @dynamic, nonatomic) NSString *reasonDescription;
@property (@dynamic, nonatomic) BOOL shouldIgnoreProtocol;
@property (@dynamic, nonatomic) BOOL shouldPersonalizeResponseActions;
@property (@dynamic, nonatomic) long long tokenType;
@property (copy, @dynamic, nonatomic) NSString *accountName;
@property (@dynamic) long long accountScope;
@property (@dynamic, nonatomic) BOOL accountNameEditable;
@property (@dynamic, nonatomic) BOOL allowsRetry;
@property (@dynamic, nonatomic) BOOL allowsSilentAuthentication;
@property (copy, @dynamic, nonatomic) NSString *altDSID;
@property (@dynamic, nonatomic) BOOL canCreateNewAccount;
@property (@dynamic, nonatomic) BOOL canSetActiveAccount;
@property (copy, @dynamic, nonatomic) NSString *initialPassword;
@property (copy, @dynamic, nonatomic) NSString *password;
@property (copy, @dynamic, nonatomic) NSString *passwordEquivalentToken;
@property (@dynamic, nonatomic) BOOL persistsPasswordFallback;
@property (copy, @dynamic, nonatomic) NSString *preferredITunesStoreClient;
@property (@dynamic, nonatomic) long long promptStyle;
@property (copy, @dynamic, nonatomic) NSDictionary *requestParameters;
@property (retain, @dynamic, nonatomic) NSNumber *requiredUniqueIdentifier;
@property (@dynamic, nonatomic) BOOL shouldCreateNewSession;
@property (@dynamic, nonatomic) BOOL shouldFollowAccountButtons;
@property (@dynamic, nonatomic) BOOL shouldIgnoreAccountConversion;
@property (@dynamic, nonatomic) BOOL shouldSuppressDialogs;
@property (copy, @dynamic, nonatomic) NSDictionary *signupRequestParameters;
@property (copy, @dynamic, nonatomic) NSString *touchIDContinueToken;
@property (copy, @dynamic, nonatomic) NSArray *userAgentComponents;
@property (copy, @dynamic, nonatomic) NSDictionary *HTTPHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (void)setValue:(id)value forHTTPHeaderField:(id)field;
- (void)setValuesWithAccount:(id)account;
@end

#endif /* SSMutableAuthenticationContext_h */
