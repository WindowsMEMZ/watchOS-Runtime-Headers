//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef _LSPlugInProxyEnumerator_h
#define _LSPlugInProxyEnumerator_h
@import Foundation;

#include "_LSApplicationExtensionRecordEnumerator.h"

@interface _LSPlugInProxyEnumerator : _LSApplicationExtensionRecordEnumerator
/* instance methods */
- (BOOL)_getObject:(id *)object atIndex:(unsigned long long)index context:(struct LSContext { id x0; } *)context;
@end

#endif /* _LSPlugInProxyEnumerator_h */
