//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSFinanceAuthenticateResponse_h
#define AMSFinanceAuthenticateResponse_h
@import Foundation;

#include "AMSAuthenticateRequest.h"
#include "AMSFinanceDialogResponse.h"
#include "AMSFinancePerformable-Protocol.h"

@class NSDictionary, NSString;

@interface AMSFinanceAuthenticateResponse : NSObject<AMSFinancePerformable>

@property (retain, nonatomic) NSDictionary *dialogDictionary;
@property (readonly, nonatomic) AMSFinanceDialogResponse *dialogResponse;
@property (readonly, nonatomic) AMSAuthenticateRequest *authenticateRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (unsigned long long)authenticationTypeForResponse:(id)response responseDictionary:(id)dictionary;
+ (id)performAuthFromResponse:(id)response taskInfo:(id)info;
+ (id)_authenticateRequestWithAuthType:(unsigned long long)type taskInfo:(id)info dialogResponse:(id)response serviceIdentifier:(id)identifier;
+ (id)_performAuthRequest:(id)request actionResult:(id)result redirectURL:(id)url taskInfo:(id)info;
+ (id)_performSyncAuthRequest:(id)request actionResult:(id)result redirectURL:(id)url taskInfo:(id)info;
+ (id)_handleAuthResult:(id)result authError:(id)error originalRequest:(id)request actionResult:(id)result redirectURL:(id)url taskInfo:(id)info;
+ (void)_handleDialogFromAuthError:(id)error taskInfo:(id)info;
+ (id)_presentAuthRequest:(id)request taskInfo:(id)info;
+ (id)_serviceIdentifierForResponse:(id)response taskInfo:(id)info;
+ (void)_updateTaskWithAuthedAccount:(id)account taskInfo:(id)info;
+ (void)_updateTaskWithLastCredentialSource:(id)source taskInfo:(id)info;

/* instance methods */
- (id)initWithResponseDictionary:(id)dictionary taskInfo:(id)info;
- (id)performWithTaskInfo:(id)info;
- (id)_locateActionableButtonUsingDialogResponse:(id)response;
@end

#endif /* AMSFinanceAuthenticateResponse_h */
