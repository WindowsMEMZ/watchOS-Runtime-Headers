//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHInternalTapToRadarDialog_h
#define BLSHInternalTapToRadarDialog_h
@import Foundation;

#include "BLSHTapToRadarDescriptor.h"

@protocol OS_os_log;

@interface BLSHInternalTapToRadarDialog : NSObject {
  /* instance variables */
  NSObject<OS_os_log> *_log;
  id /* block */ _completion;
}

@property (readonly, nonatomic) BLSHTapToRadarDescriptor *descriptor;

/* instance methods */
- (id)initWithDescriptor:(id)descriptor log:(id)log;
- (void)presentWithCompletion:(id /* block */)completion;
- (void)_alertDidDismiss:(long long)dismiss;
- (void)_file;
- (BOOL)_shouldIgnore;
- (void)_ignore;
- (void)_cancel;
- (void)_gotError;
- (void)callCompletion:(BOOL)completion shouldTryAgain:(BOOL)again;
@end

#endif /* BLSHInternalTapToRadarDialog_h */
