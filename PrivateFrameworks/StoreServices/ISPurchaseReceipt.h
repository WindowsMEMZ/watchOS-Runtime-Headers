//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef ISPurchaseReceipt_h
#define ISPurchaseReceipt_h
@import Foundation;

@class NSDate, NSString;

@interface ISPurchaseReceipt : NSObject {
  /* instance variables */
  NSString *_cancellationReason;
  NSDate *_receiptCreationDate;
  NSDate *_renewalDate;
}

@property (readonly) NSDate *expirationDate;
@property (readonly) BOOL isVPPLicensed;
@property (readonly) BOOL isRevoked;

/* class methods */
+ (id)receiptWithContentsOfFile:(id)file;

/* instance methods */
- (id)initWithContentsOfFile:(id)file;
- (BOOL)_anchorTrust:(struct __SecTrust *)trust toRootCertificateIn:(struct __CFArray *)in;
- (BOOL)_checkArray:(struct __CFArray *)array containsCertificateWithOID:(struct __CFString *)oid;
- (BOOL)_checkIfCertificate:(struct __SecCertificate *)certificate containsOID:(struct __CFString *)oid;
- (struct __CFArray *)_copyCertificatesFromSignedData:(struct SecCmsSignedDataStr *)data;
- (BOOL)_decodeReceiptData:(id)data toDecodedMessage:(inout struct SecCmsMessageStr * *)message;
- (struct SecCmsSignedDataStr *)_extractSignedDataFromMessage:(struct SecCmsMessageStr *)message;
- (BOOL)_parseReceiptFromMessage:(struct SecCmsMessageStr *)message;
- (void)_parseTokens:(id)tokens;
- (BOOL)_setPoliciesForTrust:(struct __SecTrust *)trust;
- (long long)_verifySignatureForSignedData:(struct SecCmsSignedDataStr *)data onDate:(id)date;
@end

#endif /* ISPurchaseReceipt_h */
