//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7.2.9.0.0
//
#ifndef _JEAtomicCounter_h
#define _JEAtomicCounter_h
@import Foundation;

@interface _JEAtomicCounter : NSObject {
  /* instance variables */
  atomic long long _value;
}

/* instance methods */
- (id)initWithInitialValue:(long long)value;
- (id)init;
- (long long)increment;
- (long long)decrement;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* _JEAtomicCounter_h */
