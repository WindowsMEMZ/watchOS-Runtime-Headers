//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRCommissionableBrowserResult_h
#define MTRCommissionableBrowserResult_h
@import Foundation;

@class NSMutableDictionary, NSNumber, NSString;
@protocol struct Optional<chip::Controller::SetUpCodePairerParameters> { BOOL x0; union Value { struct SetUpCodePairerParameters { struct PeerAddress { struct IPAddress { unsigned int x0[4] } x0; unsigned char x1; unsigned short x2; struct InterfaceId { unsigned int x0; } x3; } x0; unsigned int x1; unsigned short x2; struct Spake2pVerifier { unsigned char x0[32] unsigned char x1[65] } x3; BOOL x4; struct Optional<chip::ReliableMessageProtocolConfig> { BOOL x0; union Value { struct ReliableMessageProtocolConfig { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int x0; } x0; struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int x0; } x1; struct duration<unsigned short, std::ratio<1, 1000>> { unsigned short x0; } x2; } x0; } x1; } x5; struct BleLayer * x6; void * x7; void * x8; char x9[17] struct InterfaceId { unsigned int x0; } x10; } x0; } x1; }, {Optional<chip::Controller::SetUpCodePairerParameters>="mHasValue"B"mValue"(Value="mData"{SetUpCodePairerParameters="mPeerAddress"{PeerAddress="mIPAddress"{IPAddress="Addr"[4I]}"mTransportType"C"mPort"S"mInterface"{InterfaceId="mPlatformInterface"I}}"mSetupPINCode"I"mDiscriminator"S"mPASEVerifier"{Spake2pVerifier="mW0"[32C]"mL"[65C]}"mHasPASEVerifier"B"mMRPConfig"{Optional<chip::ReliableMessageProtocolConfig>="mHasValue"B"mValue"(Value="mData"{ReliableMessageProtocolConfig="mIdleRetransTimeout"{duration<unsigned int, std::ratio<1, 1000>>="__rep_"I}"mActiveRetransTimeout"{duration<unsigned int, std::ratio<1, 1000>>="__rep_"I}"mActiveThresholdTime"{duration<unsigned short, std::ratio<1, 1000>>="__rep_"S}})}"mBleLayer"^{BleLayer}"mConnectionObject"^v"mDiscoveredObject"^v"mHostName"[17c]"mInterfaceId"{InterfaceId="mPlatformInterface"I}})};

@interface MTRCommissionableBrowserResult : NSObject

@property (retain, nonatomic) NSString *instanceName;
@property (retain, nonatomic) NSNumber *vendorID;
@property (retain, nonatomic) NSNumber *productID;
@property (retain, nonatomic) NSNumber *discriminator;
@property (nonatomic) BOOL commissioningMode;
@property (retain, nonatomic) NSMutableDictionary *interfaces;
@property (nonatomic) struct Optional<chip::Controller::SetUpCodePairerParameters> { BOOL x0; union Value { struct SetUpCodePairerParameters { struct PeerAddress { struct IPAddress { unsigned int x0[4] } x0; unsigned char x1; unsigned short x2; struct InterfaceId { unsigned int x0; } x3; } x0; unsigned int x1; unsigned short x2; struct Spake2pVerifier { unsigned char x0[32] unsigned char x1[65] } x3; BOOL x4; struct Optional<chip::ReliableMessageProtocolConfig> { BOOL x0; union Value { struct ReliableMessageProtocolConfig { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int x0; } x0; struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int x0; } x1; struct duration<unsigned short, std::ratio<1, 1000>> { unsigned short x0; } x2; } x0; } x1; } x5; struct BleLayer * x6; void * x7; void * x8; char x9[17] struct InterfaceId { unsigned int x0; } x10; } x0; } x1; } params;

/* instance methods */
@end

#endif /* MTRCommissionableBrowserResult_h */
