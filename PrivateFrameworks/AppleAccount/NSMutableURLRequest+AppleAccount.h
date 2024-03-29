//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef NSMutableURLRequest_AppleAccount_h
#define NSMutableURLRequest_AppleAccount_h
@import Foundation;

@interface NSMutableURLRequest (AppleAccount)
/* instance methods */
- (void)aa_addTokenAuthHeaderWithAccount:(id)account;
- (void)aa_addBasicAuthPasswordWithAccount:(id)account;
- (void)aa_addAltDSIDAndRepairStateWithAccount:(id)account;
- (void)aa_addBasicAuthorizationHeaderWithAccount:(id)account preferUsingPassword:(BOOL)password;
- (void)aa_addBasicAuthorizationHeaderWithAccount:(id)account authToken:(id)token;
- (BOOL)aa_addAuthTokenOrBasicAuthHeaderWithAccount:(id)account preferUsingPassword:(BOOL)password;
- (void)aa_setBodyWithParameters:(id)parameters;
- (id)aa_setXMLBodyWithParameters:(id)parameters;
- (void)aa_setJSONBodyWithParameters:(id)parameters;
- (void)aa_signBodyData:(id)data withSigningSession:(id)session;
- (void)aa_setXMLBodyWithParameters:(id)parameters signingSession:(id)session;
- (BOOL)aa_addGrandSlamAuthorizationHeaderWithAccount:(id)account grandslamToken:(id)token;
- (BOOL)aa_addGrandslamAuthorizationHeaderWithAltDSID:(id)dsid grandslamToken:(id)token;
- (BOOL)aa_addGrandslamAuthorizationheaderWithAltDSID:(id)dsid heartbeatToken:(id)token;
- (void)aa_addDeviceProvisioningInfoHeadersWithAccount:(id)account;
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)dsid;
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)dsid sendEmptyValues:(BOOL)values;
- (void)aa_addDeviceInternalDevHeaderIfEnabled;
- (void)aa_addDeviceIDHeader;
- (void)aa_addMultiUserDeviceHeaderIfEnabled;
- (void)aa_addLoggedInAppleIDHeaderWithAccount:(id)account;
- (BOOL)aa_addDeviceProvisioningInfoHeadersWithDSIDFromReponse:(id)reponse;
- (void)aa_addClientInfoHeaders;
- (void)aa_addContentTypeHeaders:(id)headers;
- (void)aa_addLocationSharingAllowedHeader;
- (void)aa_addProxiedAuthHeaderWithAccount:(id)account;
- (void)aa_addAppProvidedContext:(id)context;
- (void)aa_addSpyglassModeHeaderWithMask:(unsigned long long)mask;
@end

#endif /* NSMutableURLRequest_AppleAccount_h */
