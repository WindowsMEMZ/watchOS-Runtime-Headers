//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentControllerInternalState_h
#define PKPeerPaymentControllerInternalState_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKPeerPaymentPerformResponse.h"
#include "PKPeerPaymentQuote.h"
#include "PKPeerPaymentQuoteCertificatesResponse.h"
#include "PKPeerPaymentQuoteRequest.h"
#include "PKPeerPaymentRecipient.h"
#include "PKPeerPaymentRequestToken.h"

@class NSDate, NSDecimalNumber, NSString;

@interface PKPeerPaymentControllerInternalState : NSObject<NSSecureCoding> {
  /* instance variables */
  unsigned long long state;
  unsigned long long mode;
  NSString *senderPhoneOrEmail;
  NSString *recipientPhoneOrEmail;
  PKPeerPaymentRecipient *recipient;
  NSString *recipientDisplayName;
  PKPeerPaymentRequestToken *requestToken;
  PKPeerPaymentQuote *quote;
  PKPeerPaymentPerformResponse *performQuoteResponse;
  BOOL supportsPreserveCurrentBalance;
  PKPeerPaymentQuoteCertificatesResponse *quoteCertificatesResponse;
  NSString *accountName;
  NSString *accountNumber;
  NSString *routingNumber;
  PKPeerPaymentQuoteRequest *quoteRequest;
  NSString *recurringPaymentIdentifier;
  NSDate *startDate;
  unsigned long long frequency;
  NSDecimalNumber *threshold;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToPeerPaymentControllerInternalState:(id)state;
@end

#endif /* PKPeerPaymentControllerInternalState_h */
