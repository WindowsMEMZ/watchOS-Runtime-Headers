//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKShareCapabilitiesSectionProviderProtocol_Protocol_h
#define NPKShareCapabilitiesSectionProviderProtocol_Protocol_h
@import Foundation;

@protocol NPKShareCapabilitiesSectionProviderProtocol <NSObject>
/* instance methods */
- (void)handleDidSelectAddContactForSectionProvider:(id)provider;
- (void)handleDidSelectEntitlementSummaryForShare:(id)share sectionProvider:(id)provider;
- (void)handleDidSelectActivationOption:(id)option forShare:(id)share sectionProvider:(id)provider;
- (void)handleDidSelectCreateShareForSectionProvider:(id)provider;
@end

#endif /* NPKShareCapabilitiesSectionProviderProtocol_Protocol_h */
