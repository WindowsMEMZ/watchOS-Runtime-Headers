//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3762.60.29.0.0
//
#ifndef NWConcrete_nw_error_h
#define NWConcrete_nw_error_h
@import Foundation;

#include "OS_nw_error-Protocol.h"

@class NSString;

@interface NWConcrete_nw_error : NSObject<OS_nw_error> {
  /* instance variables */
  int domain;
  int code;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

#endif /* NWConcrete_nw_error_h */
