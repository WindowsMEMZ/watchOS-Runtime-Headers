//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKAppleIDServerUIContextController_h
#define AKAppleIDServerUIContextController_h
@import Foundation;

#include "AKAppleIDServerUIDataHarvester.h"

@class AKAppleIDServerResourceLoadDelegate, AKServerRequestConfiguration, NSHTTPURLResponse, NSURL;

@interface AKAppleIDServerUIContextController : NSObject {
  /* instance variables */
  id /* block */ _serverUICompletion;
  NSHTTPURLResponse *_latestReadResponse;
  AKServerRequestConfiguration *_configuration;
}

@property (readonly, nonatomic) AKAppleIDServerResourceLoadDelegate *serverUIDelegate;
@property (readonly, nonatomic) AKAppleIDServerUIDataHarvester *serverDataHarvester;
@property (readonly, copy, nonatomic) NSURL *initiatingURL;

/* instance methods */
- (void)tearDownContext;
- (id)initWithRequestConfiguration:(id)configuration completion:(id /* block */)completion;
- (BOOL)handleAuthKitActionAttribute:(id)attribute;
- (void)signRequest:(id)request withCompletionHandler:(id /* block */)handler;
- (id)_headerValueFromType:(unsigned long long)type;
- (void)processResponse:(id)response;
- (void)completeWithError:(id)error;
- (void)completeWithError:(id)error additionalData:(id)data;
- (void)completeWithFinalResponse:(id)response;
- (void)_completeWithResponse:(id)response additionalData:(id)data error:(id)error;
@end

#endif /* AKAppleIDServerUIContextController_h */
