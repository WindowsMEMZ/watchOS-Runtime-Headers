//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 524.1.0.0.0
//
#ifndef RPDevice_h
#define RPDevice_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class CUMobileDevice, CUPairedPeer, CURangingMeasurement, NSData, NSDate, NSDictionary, NSString, NSUUID, SFDevice;

@interface RPDevice : NSObject<NSSecureCoding>

@property (retain, nonatomic) SFDevice *bleDevice;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) CUMobileDevice *mobileDevice;
@property (copy, nonatomic) NSString *name;
@property (retain) CURangingMeasurement *relativeLocation;
@property (readonly, copy, nonatomic) NSData *authTag;
@property (readonly, copy, nonatomic) NSData *bleAdvertisementData;
@property (readonly, copy, nonatomic) NSData *bleDeviceAddress;
@property (readonly, nonatomic) unsigned int blePairState;
@property (readonly, nonatomic) unsigned char deviceActionType;
@property (copy, nonatomic) NSUUID *identifierUUID;
@property (readonly, nonatomic) BOOL needsSetup;
@property (retain, nonatomic) CUPairedPeer *pairedPeer;
@property (copy, nonatomic) NSUUID *pairingIdentifier;
@property (readonly, nonatomic) int rawRSSI;
@property (readonly, nonatomic) int smoothedRSSI;
@property (nonatomic) unsigned int systemPairState;
@property (readonly, copy, nonatomic) NSData *txtData;
@property (readonly, copy, nonatomic) NSDictionary *txtDictionary;
@property (copy, nonatomic) NSString *udid;
@property (copy, nonatomic) NSData *wifiAddress;
@property (copy, nonatomic) NSData *wifiBSSID;
@property (copy, nonatomic) NSData *wifiDeviceIEDeviceID;
@property (readonly, nonatomic) unsigned int wifiDeviceIEFlags;
@property (copy, nonatomic) NSData *wifiDeviceIEName;
@property (copy, nonatomic) NSData *wifiIEData;
@property (retain, nonatomic) id wifiPlatformObject;
@property (copy, nonatomic) NSString *wifiSSID;
@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) int activityLevel;
@property (readonly, nonatomic) NSDate *activityLevelTimeStamp;
@property (readonly, copy, nonatomic) NSData *bleAuthTag;
@property (readonly, copy, nonatomic) NSString *contactID;
@property (readonly, nonatomic) unsigned int flags;
@property (readonly, copy, nonatomic) NSString *idsDeviceIdentifier;
@property (readonly, nonatomic) BOOL idsDeviceIdentifierConflict;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, nonatomic) int proximity;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)descriptionWithLevel:(int)level;
- (double)timeSinceLastActivityLevelChange;
- (void)_updateTXTDictionary:(id)txtdictionary;
- (unsigned int)updateWithBonjourDevice:(id)device;
- (unsigned int)updateWithMobileDevice:(id)device;
- (unsigned int)updateWithSFDevice:(id)sfdevice changes:(unsigned int)changes;
- (void)updateWithSystemInfo:(id)info;
- (void)updateWithWiFiDevice:(id)device changes:(unsigned int)changes;
@end

#endif /* RPDevice_h */
