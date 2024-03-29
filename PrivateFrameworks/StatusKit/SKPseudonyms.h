//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef SKPseudonyms_h
#define SKPseudonyms_h
@import Foundation;

@class IDSService;

@interface SKPseudonyms : NSObject

@property (retain, nonatomic) IDSService *service;

/* instance methods */
- (id)initWithIDSService:(id)idsservice;
- (id)pseudonymForPseudonymURI:(id)uri;
- (id)pseudonymsForMaskedURI:(id)uri;
- (id)pseudonymsForMaskedURI:(id)uri matchingProperties:(id)properties;
- (void)provisionPseudonymWithProperties:(id)properties completion:(id /* block */)completion;
- (void)provisionPseudonymWithProperties:(id)properties requestProperties:(id)properties completion:(id /* block */)completion;
- (void)provisionPseudonymForURI:(id)uri withProperties:(id)properties completion:(id /* block */)completion;
- (void)provisionPseudonymForURI:(id)uri withProperties:(id)properties requestProperties:(id)properties completion:(id /* block */)completion;
- (void)renewPseudonym:(id)pseudonym forUpdatedDuration:(double)duration completion:(id /* block */)completion;
- (void)revokePseudonym:(id)pseudonym completion:(id /* block */)completion;
- (id)pseudonymPropertiesWithFeatureID:(id)id scopeID:(id)id expiryDurationInSeconds:(double)seconds;
- (id)pseudonymPropertiesWithFeatureID:(id)id expiryDurationInSeconds:(double)seconds;
- (id)propertiesWithUpdatedServices:(id)services;
@end

#endif /* SKPseudonyms_h */
