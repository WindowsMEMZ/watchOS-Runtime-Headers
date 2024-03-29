//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef SAAceView_ClientFeedbackPresented_h
#define SAAceView_ClientFeedbackPresented_h
@import Foundation;

@interface SAAceView (ClientFeedbackPresented) <AFAceCommandClientFeedbackEnumerating>
/* instance methods */
- (void)af_addEntriesToAnalyticsContext:(id)context;
- (id)af_dialogIdentifiersForAnalyticsContext;
- (id)_af_dialogPhase;
- (id)_af_dialogIdentifier;
- (void)_af_enumerateClientFeedbackDetails:(id /* block */)details;
@end

#endif /* SAAceView_ClientFeedbackPresented_h */
