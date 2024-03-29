//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55282.0.0.0.0
//
#ifndef SFRSASigningOperation_Ivars_h
#define SFRSASigningOperation_Ivars_h
@import Foundation;

#include "SFDigestOperation-Protocol.h"
#include "_SFRSAKeySpecifier.h"

@interface SFRSASigningOperation_Ivars : NSObject {
  /* instance variables */
  _SFRSAKeySpecifier *keySpecifier;
  NSObject<SFDigestOperation> *digestOperation;
}

/* instance methods */
@end

#endif /* SFRSASigningOperation_Ivars_h */
