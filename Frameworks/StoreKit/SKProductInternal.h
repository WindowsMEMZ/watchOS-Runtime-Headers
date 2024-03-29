//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 813.2.8.0.0
//
#ifndef SKProductInternal_h
#define SKProductInternal_h
@import Foundation;

#include "SKProductDiscount.h"
#include "SKProductSubscriptionPeriod.h"

@class NSArray, NSDecimalNumber, NSLocale, NSString;

@interface SKProductInternal : NSObject {
  /* instance variables */
  NSString *_contentVersion;
  BOOL _downloadable;
  BOOL _familyShareable;
  NSArray *_downloadContentLengths;
  SKProductDiscount *_introductoryPrice;
  NSString *_localizedDescription;
  NSString *_localizedTitle;
  NSDecimalNumber *_price;
  NSLocale *_priceLocale;
  NSString *_productIdentifier;
  NSString *_subscriptionGroupIdentifier;
  SKProductSubscriptionPeriod *_subscriptionPeriod;
  NSArray *_discounts;
}

/* instance methods */
@end

#endif /* SKProductInternal_h */
