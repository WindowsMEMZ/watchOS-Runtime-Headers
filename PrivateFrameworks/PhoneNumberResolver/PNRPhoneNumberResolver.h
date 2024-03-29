//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 36.40.7.2.1
//
#ifndef PNRPhoneNumberResolver_h
#define PNRPhoneNumberResolver_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface PNRPhoneNumberResolver : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_resolveQueue;
}

/* instance methods */
- (id)init;
- (id)_notAPhoneNumberError;
- (id)_notFullyQualifiedError;
- (void)resolvePhoneNumbers:(id)numbers handler:(id /* block */)handler queue:(id)queue;
- (void)resolvePhoneNumbers:(id)numbers queue:(id)queue handler:(id /* block */)handler;
- (id)resolvePhoneNumber:(id)number countryCode:(id)code error:(id *)error;
- (void)resolveFullyQualifiedPhoneNumber:(id)number inCountry:(id)country logId:(id)id resultBlock:(id /* block */)block;
- (void)_recordUsageAnalyticForCountryCode:(id)code success:(BOOL)success;
@end

#endif /* PNRPhoneNumberResolver_h */
