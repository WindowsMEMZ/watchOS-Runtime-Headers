//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraProfileSettingsModel_h
#define HMDCameraProfileSettingsModel_h
@import Foundation;

#include "HMBModel.h"
#include "HMDBulletinBoardNotification.h"

@class NSData, NSNumber, NSSet;

@interface HMDCameraProfileSettingsModel : HMBModel

@property (copy, @dynamic) NSNumber *versionField;
@property (copy, @dynamic) NSNumber *accessModeAtHomeField;
@property (copy, @dynamic) NSNumber *accessModeNotAtHomeField;
@property (copy, @dynamic) NSNumber *recordingEventTriggersField;
@property (copy, @dynamic) NSNumber *accessModeIndicatorEnabledField;
@property (copy, @dynamic) NSNumber *nightVisionModeEnabledField;
@property (copy, @dynamic) NSNumber *snapshotsAllowedField;
@property (copy, @dynamic) NSNumber *periodicSnapshotsAllowedField;
@property (copy, @dynamic) NSNumber *recordingAudioEnabledField;
@property (copy, @dynamic) NSNumber *accessModeChangeNotificationEnabledField;
@property (copy, @dynamic) NSNumber *reachabilityEventNotificationEnabledField;
@property (copy, @dynamic) NSData *smartBulletinBoardNotificationDataField;
@property (copy, @dynamic) NSData *activityZonesField;
@property (copy, @dynamic) NSNumber *activityZonesIncludedForSignificantEventDetectionField;
@property unsigned long long currentAccessMode;
@property (readonly) BOOL hasAnyNotificationFieldsSet;
@property (readonly) unsigned long long mostPrivateAccessMode;
@property long long version;
@property unsigned long long accessModeAtHome;
@property unsigned long long accessModeNotAtHome;
@property unsigned long long recordingEventTriggers;
@property BOOL accessModeIndicatorEnabled;
@property BOOL nightVisionModeEnabled;
@property BOOL snapshotsAllowed;
@property BOOL periodicSnapshotsAllowed;
@property BOOL recordingAudioEnabled;
@property BOOL cameraManuallyDisabled;
@property (retain) NSSet *activityZones;
@property BOOL activityZonesIncludedForSignificantEventDetection;
@property (readonly) BOOL accessModeChangeNotificationEnabled;
@property (readonly) HMDBulletinBoardNotification *smartBulletinBoardNotification;
@property (readonly) BOOL reachabilityEventNotificationEnabled;

/* class methods */
+ (id)hmbProperties;
@end

#endif /* HMDCameraProfileSettingsModel_h */
