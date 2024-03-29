//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AADeviceList_h
#define AADeviceList_h
@import Foundation;

@class AIDAAccountManager, AKAppleIDAuthenticationController, NSArray, NSError;
@protocol AADeviceListDelegate;

@interface AADeviceList : NSObject {
  /* instance variables */
  AKAppleIDAuthenticationController *_authController;
  AIDAAccountManager *_accountManager;
}

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSError *loadError;
@property (weak, nonatomic) NSObject<AADeviceListDelegate> *delegate;

/* instance methods */
- (id)initWithAccountManager:(id)manager;
- (void)refreshDeviceList;
- (id)_accountStore;
- (id)_appleAccount;
- (id)_aidaAccount;
- (id)_authController;
- (void)_loadDeviceList;
- (void)_setDeviceList:(id)list loadError:(id)error;
- (void)_createRequestForAccount:(id)account requestHandler:(id /* block */)handler;
- (void)_loadRequest:(id)request responseHandler:(id /* block */)handler;
- (void)_renewCredentials;
@end

#endif /* AADeviceList_h */
