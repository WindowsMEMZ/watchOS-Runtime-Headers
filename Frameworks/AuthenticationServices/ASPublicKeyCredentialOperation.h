//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef ASPublicKeyCredentialOperation_h
#define ASPublicKeyCredentialOperation_h
@import Foundation;

@class LAContext, NSDictionary, NSError, NSMutableDictionary, NSString, NSUUID, WBSSavedAccountContext, _WKWebAuthenticationPanel;
@protocol ASPublicKeyCredentialManagerDelegate, OS_dispatch_semaphore, OS_os_activity;

@interface ASPublicKeyCredentialOperation : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_semaphore> *_internalSemaphore;
  id /* block */ _selectPlatformAssertionCallback;
  id /* block */ _selectSecurityKeyAssertionCallback;
}

@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) NSObject<ASPublicKeyCredentialManagerDelegate> *delegate;
@property (copy, nonatomic) NSString *relyingPartyIdentifier;
@property (retain, nonatomic) _WKWebAuthenticationPanel *panel;
@property (copy, nonatomic) NSString *sourceApplicationIdentifier;
@property (nonatomic) BOOL shouldRequireUserVerification;
@property (readonly, copy, nonatomic) NSDictionary *identifiersToAssertionResponses;
@property (retain, nonatomic) LAContext *authenticatedLAContext;
@property (copy, nonatomic) NSError *overrideError;
@property (readonly, nonatomic) BOOL hasTornDown;
@property (readonly, nonatomic) BOOL hasSelectedAssertion;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (retain, nonatomic) WBSSavedAccountContext *savedAccountContext;

/* instance methods */
- (id)initWithRelyingPartyIdentifier:(id)identifier delegate:(id)delegate parentActivity:(id)activity;
- (void)mergeIdentifiersToAssertionResponses:(id)responses;
- (void)setPlatformAssertionSelectionCallback:(id /* block */)callback;
- (void)setSecurityKeyAssertionSelectionCallback:(id /* block */)callback;
- (void)selectPlatformAssertion:(id)assertion;
- (void)selectSecurityKeyAssertion:(id)assertion;
- (void)tearDownIfNecessary;
@end

#endif /* ASPublicKeyCredentialOperation_h */
