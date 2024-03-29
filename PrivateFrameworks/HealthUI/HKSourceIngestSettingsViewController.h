//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSourceIngestSettingsViewController_h
#define HKSourceIngestSettingsViewController_h
@import Foundation;

#include "_HKIngestSettingsViewController.h"

@class HKSource;

@interface HKSourceIngestSettingsViewController : _HKIngestSettingsViewController {
  /* instance variables */
  HKSource *_source;
}

/* instance methods */
- (id)initWithHealthStore:(id)store displayTypeController:(id)controller source:(id)source useInsetStyling:(BOOL)styling;
- (void)viewDidLoad;
@end

#endif /* HKSourceIngestSettingsViewController_h */
