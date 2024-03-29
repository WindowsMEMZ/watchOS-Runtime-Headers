//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef SecCBORNegative_h
#define SecCBORNegative_h
@import Foundation;

#include "SecCBORValue.h"

@interface SecCBORNegative : SecCBORValue {
  /* instance variables */
  long long m_data;
}

/* instance methods */
- (int)fieldType;
- (id)initWith:(long long)with;
- (void)write:(id)write;
- (long long)compare:(id)compare;
- (id)getLabel;
@end

#endif /* SecCBORNegative_h */
