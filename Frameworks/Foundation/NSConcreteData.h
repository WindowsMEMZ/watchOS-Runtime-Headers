//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSConcreteData_h
#define NSConcreteData_h
@import Foundation;

#include "NSData.h"

@interface NSConcreteData : NSData {
  /* instance variables */
  unsigned long long _length;
  void * _bytes;
  id /* block */ _deallocator;
}

/* instance methods */
- (unsigned long long)length;
- (const void *)bytes;
- (BOOL)_copyWillRetain;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)_isCompact;
- (void)getBytes:(void *)bytes;
- (void)getBytes:(void *)bytes length:(unsigned long long)length;
- (void)getBytes:(void *)bytes range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)init;
- (id)initWithBytes:(void *)bytes length:(unsigned long long)length copy:(BOOL)copy deallocator:(id /* block */)deallocator;
- (id)initWithBytes:(void *)bytes length:(unsigned long long)length copy:(BOOL)copy freeWhenDone:(BOOL)done bytesAreVM:(BOOL)vm;
- (void)dealloc;
- (id)_createDispatchData;
- (BOOL)_providesConcreteBacking;
@end

#endif /* NSConcreteData_h */
