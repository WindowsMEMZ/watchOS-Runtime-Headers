//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLPRFStingConfigurationHistory_h
#define CSLPRFStingConfigurationHistory_h
@import Foundation;

#include "CSLPRFStingConfigurationHistorySetting.h"
#include "CSLPRFStingSettingsModel.h"

@interface CSLPRFStingConfigurationHistory : NSObject {
  /* instance variables */
  CSLPRFStingConfigurationHistorySetting *_historySetting;
  CSLPRFStingSettingsModel *_model;
}

/* instance methods */
- (id)init;
- (void)addHistoryItem:(id)item;
- (id)itemForActionType:(unsigned long long)type;
- (id)itemForWorkoutWithBundleID:(id)id;
- (id)_itemForActionType:(unsigned long long)type withBundleID:(id)id;
- (id)_historyItemForActionType:(unsigned long long)type;
@end

#endif /* CSLPRFStingConfigurationHistory_h */
