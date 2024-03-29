//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTCellularPlanItem_h
#define CTCellularPlanItem_h
@import Foundation;

#include "CTCellularPlan.h"
#include "CTUserLabel.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class CTPlan, NSNumber, NSString, NSUUID;

@interface CTCellularPlanItem : NSObject<NSCopying, NSSecureCoding>

@property (retain, nonatomic) NSNumber *isSelectedOverride;
@property (nonatomic) long long type;
@property (nonatomic) long long lockState;
@property (nonatomic) BOOL shouldDisplayType;
@property (nonatomic) BOOL shouldAutoSelectWhenInRange;
@property (nonatomic) BOOL isSimStateValid;
@property (nonatomic) BOOL isSelectable;
@property (nonatomic) BOOL shouldAppearDisabled;
@property (nonatomic) BOOL shouldDisplay;
@property (nonatomic) BOOL isActiveDataPlan;
@property (nonatomic) BOOL isDefaultVoice;
@property (nonatomic) BOOL shouldDisplayExtendedConsentInfo;
@property (nonatomic) BOOL isLocalTransferToeSIMSupported;
@property (nonatomic) BOOL isTransferred;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long supportedTransferOption;
@property (nonatomic) long long settingsMode;
@property (copy, nonatomic) NSUUID *companionSlotUuid;
@property (copy, nonatomic) NSString *companionSimLabelId;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) CTUserLabel *userLabel;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CTCellularPlan *plan;
@property (readonly, nonatomic) CTPlan *ctPlan;
@property (readonly, nonatomic) BOOL isBackedByCellularPlan;
@property (readonly, nonatomic) BOOL isSelected;
@property (readonly, nonatomic) BOOL isInstalling;
@property (readonly, nonatomic) long long transferredStatus;
@property (readonly, nonatomic) BOOL isCheckingCellularConnectivity;
@property (readonly, nonatomic) NSString *transferredToDeviceDisplayName;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *iccid;
@property (readonly, nonatomic) NSString *carrierName;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCellularPlan:(id)plan uuid:(id)uuid iccid:(id)iccid name:(id)name type:(long long)type phoneNumber:(id)number label:(id)label isLocalTransferToeSIMSupported:(BOOL)simsupported isTransferred:(BOOL)transferred transferredStatus:(long long)status transferredToDeviceDisplayName:(id)name supportedTransferOption:(unsigned long long)option settingsMode:(long long)mode;
- (id)initWithCellularPlan:(id)plan uuid:(id)uuid type:(long long)type phoneNumber:(id)number label:(id)label transferredStatus:(long long)status transferredToDeviceDisplayName:(id)name supportedTransferOption:(unsigned long long)option settingsMode:(long long)mode;
- (id)initWithIccid:(id)iccid uuid:(id)uuid name:(id)name phoneNumber:(id)number label:(id)label isLocalTransferToeSIMSupported:(BOOL)simsupported isTransferred:(BOOL)transferred transferredStatus:(long long)status transferredToDeviceDisplayName:(id)name supportedTransferOption:(unsigned long long)option settingsMode:(long long)mode;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (long long)compare:(id)compare;
- (id)typeAsString:(long long)string;
- (id)transferredStatusAsString:(long long)string;
- (id)settingsModeAsString:(long long)string;
- (id)description;
- (id)redactedDescription;
- (id)customDescription;
@end

#endif /* CTCellularPlanItem_h */
