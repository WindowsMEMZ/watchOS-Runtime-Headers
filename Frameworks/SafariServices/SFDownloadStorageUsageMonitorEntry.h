//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFDownloadStorageUsageMonitorEntry_h
#define SFDownloadStorageUsageMonitorEntry_h
@import Foundation;

#include "SFDownloadStorageUsageMonitorEntryDelegate-Protocol.h"

@class NSData, NSProgress, NSString, NSUUID;

@interface SFDownloadStorageUsageMonitorEntry : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) id progressSubscriber;
@property (retain, nonatomic) NSString *destinationPath;
@property (retain, nonatomic) NSData *progressData;
@property (nonatomic) long long cachedUsage;
@property (weak, nonatomic) NSObject<SFDownloadStorageUsageMonitorEntryDelegate> *delegate;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (void)_didGainProgress:(id)progress;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)_didLoseProgress:(id)progress;
- (void)_updateProgressSubscriptionWithData:(id)data;
- (void)updateWithDictionaryRepresentation:(id)representation;
@end

#endif /* SFDownloadStorageUsageMonitorEntry_h */
