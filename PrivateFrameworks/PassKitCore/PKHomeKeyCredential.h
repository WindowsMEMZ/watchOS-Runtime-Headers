//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKHomeKeyCredential_h
#define PKHomeKeyCredential_h
@import Foundation;

#include "PKPaymentLocalPassCredential.h"

@interface PKHomeKeyCredential : PKPaymentLocalPassCredential {
  /* instance variables */
  BOOL _detailDescriptionAvailable;
}

/* instance methods */
- (id)initWithPaymentPass:(id)pass;
- (id)detailDescription;
- (id)paymentApplications;
- (BOOL)supportsSuperEasyProvisioning;
@end

#endif /* PKHomeKeyCredential_h */
