//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 920.3.0.0.0
//
#ifndef NRTermsAcknowledgementRegistry_h
#define NRTermsAcknowledgementRegistry_h
@import Foundation;

#include "NRTermsAcknowledgementRegistry-Protocol.h"

@class NSString;

@interface NRTermsAcknowledgementRegistry : NSObject<NRTermsAcknowledgementRegistry> {
  /* instance variables */
  NSObject<NRTermsAcknowledgementRegistry> *_proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)errorStringWithEnum:(unsigned long long)enum;
+ (id)errorWithEnum:(unsigned long long)enum;

/* instance methods */
- (void)add:(id)add forDeviceID:(id)id withCompletion:(id /* block */)completion;
- (void)checkForAcknowledgement:(id)acknowledgement forDeviceID:(id)id withCompletion:(id /* block */)completion;
@end

#endif /* NRTermsAcknowledgementRegistry_h */
