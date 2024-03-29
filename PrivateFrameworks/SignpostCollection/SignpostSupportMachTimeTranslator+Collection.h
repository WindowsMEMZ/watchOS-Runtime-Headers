//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 121.0.0.0.0
//
#ifndef SignpostSupportMachTimeTranslator_Collection_h
#define SignpostSupportMachTimeTranslator_Collection_h
@import Foundation;

@interface SignpostSupportMachTimeTranslator (Collection)
/* class methods */
+ (id)_globalNotificationDispatchQueue;
+ (id)_timeTranslationLog;
+ (void)_addListeningTimeTranslator:(id)translator;
+ (void)_removeListeningTimeTranslator:(id)translator;
+ (void)_processPowerNotificationOfType:(unsigned int)type withNotificationID:(long long)id;
+ (void)_snapshotMachTimesForAllListeners;

/* instance methods */
- (id)initWithMaxEntries:(unsigned long long)entries;
- (void)_grabMachTimesSnapshot;
- (void)startMonitoringSleepWake;
- (void)stopMonitoringSleepWake;
- (id)dataRepresentationDuringMonitoring;
@end

#endif /* SignpostSupportMachTimeTranslator_Collection_h */
