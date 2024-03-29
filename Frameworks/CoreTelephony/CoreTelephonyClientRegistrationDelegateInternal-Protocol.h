//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CoreTelephonyClientRegistrationDelegateInternal_Protocol_h
#define CoreTelephonyClientRegistrationDelegateInternal_Protocol_h
@import Foundation;

@protocol CoreTelephonyClientRegistrationDelegateInternal <NSObject>
@optional
/* instance methods */
- (void)operatorNameChanged:(id)changed name:(id)name;
- (void)displayStatusChanged:(id)changed status:(id)status;
- (void)signalStrengthChanged:(id)changed info:(id)info;
- (void)rejectCauseCodeChanged:(id)changed causeCode:(id)code;
- (void)voiceLinkQualityChanged:(id)changed metric:(id)metric;
- (void)enhancedVoiceLinkQualityChanged:(id)changed metric:(id)metric;
- (void)enhancedDataLinkQualityChanged:(id)changed metric:(id)metric;
- (void)imsRegistrationChanged:(id)changed info:(id)info;
- (void)cellChanged:(id)changed cell:(id)cell;
- (void)cellMonitorUpdate:(id)update info:(id)info;
- (void)networkListAvailable:(id)available list:(id)list;
- (void)customerServiceProfileChanged:(id)changed visible:(BOOL)visible;
- (void)networkSelected:(id)selected success:(BOOL)success mode:(id)mode;
- (void)networkReselectionNeeded:(id)needed;
- (void)encryptionStatusChanged:(id)changed info:(id)info;
- (void)ratSelectionChanged:(id)changed selection:(id)selection;
- (void)nrDisableStatusChanged:(id)changed status:(id)status;
- (void)plmnChanged:(id)changed plmn:(id)plmn;
- (void)dataRatesChanged;
@end

#endif /* CoreTelephonyClientRegistrationDelegateInternal_Protocol_h */
