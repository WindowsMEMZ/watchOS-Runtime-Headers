//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentAuthorizationLayout_h
#define PKPaymentAuthorizationLayout_h
@import Foundation;

@class NSString;

@interface PKPaymentAuthorizationLayout : NSObject

@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) double contentHorizontalMargin;
@property (readonly, nonatomic) double valueLeftMargin;
@property (readonly, nonatomic) double glyphDimension;
@property (readonly, nonatomic) unsigned long long requestType;
@property (readonly, nonatomic) unsigned long long requestor;
@property (readonly, nonatomic) BOOL isAMPPayment;
@property (readonly, nonatomic) BOOL isInstallment;
@property (readonly, nonatomic) BOOL isPaymentSummaryPinned;
@property (readonly, nonatomic) NSString *localizedNavigationTitle;
@property (readonly, nonatomic) BOOL shouldSuppressTotal;

/* instance methods */
- (id)initWithStyle:(long long)style paymentRequest:(id)request;
@end

#endif /* PKPaymentAuthorizationLayout_h */
