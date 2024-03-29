//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentPreferenceCardEntry_h
#define PKPaymentPreferenceCardEntry_h
@import Foundation;

#include "PKPaymentApplication.h"
#include "PKPaymentPass.h"
#include "PKRemotePaymentInstrument.h"

@class NSString;

@interface PKPaymentPreferenceCardEntry : NSObject

@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument;
@property (retain, nonatomic) PKPaymentApplication *paymentApplication;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *availabilityString;
@property (nonatomic) BOOL shouldShowCardUI;
@property (nonatomic) BOOL isSelectable;
@property (nonatomic) BOOL insetsSeparatorByTextOffset;
@property (copy, nonatomic) id /* block */ actionBlock;

/* instance methods */
@end

#endif /* PKPaymentPreferenceCardEntry_h */
