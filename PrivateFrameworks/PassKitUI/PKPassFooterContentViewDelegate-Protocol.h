//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassFooterContentViewDelegate_Protocol_h
#define PKPassFooterContentViewDelegate_Protocol_h
@import Foundation;

@protocol PKPassFooterContentViewDelegate <NSObject>
/* instance methods */
- (void)passFooterContentViewDidAuthenticate:(id)authenticate;
- (void)passFooterContentViewDidTransact:(id)transact;
- (void)passFooterContentView:(id)view didAuthorizeAndRetrieveDecryptedBarcode:(id)barcode;
- (void)passFooterContentViewDidInvalidateAuthorizedBarcode:(id)barcode;
- (void)passFooterContentViewRequestsSessionSuppression:(id)suppression;
- (void)passFooterContentViewDidChangePhysicalButtonRequirement:(id)requirement;
- (void)passFooterContentViewDidChangeCoachingState:(id)state;
- (BOOL)isPassFooterContentViewInGroup:(id)group;
- (unsigned long long)suppressedContentForContentView:(id)view;
- (void)passFooterContentViewDidChangePileSuppressionRequirement:(id)requirement;
@end

#endif /* PKPassFooterContentViewDelegate_Protocol_h */
