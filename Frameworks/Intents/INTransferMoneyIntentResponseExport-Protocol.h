//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INTransferMoneyIntentResponseExport_Protocol_h
#define INTransferMoneyIntentResponseExport_Protocol_h
@import Foundation;

@protocol INTransferMoneyIntentResponseExport <NSObject, JSExport>

@property (readonly, nonatomic) long long code;
@property (copy, nonatomic) INPaymentAccount *fromAccount;
@property (copy, nonatomic) INPaymentAccount *toAccount;
@property (copy, nonatomic) INPaymentAmount *transactionAmount;
@property (copy, nonatomic) INDateComponentsRange *transactionScheduledDate;
@property (copy, nonatomic) NSString *transactionNote;
@property (copy, nonatomic) INCurrencyAmount *transferFee;

@end

#endif /* INTransferMoneyIntentResponseExport_Protocol_h */
