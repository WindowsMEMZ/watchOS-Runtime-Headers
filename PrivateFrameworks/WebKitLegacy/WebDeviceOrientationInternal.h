//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebDeviceOrientationInternal_h
#define WebDeviceOrientationInternal_h
@import Foundation;

@protocol {RefPtr<WebCore::DeviceOrientationData, WTF::RawPtrTraits<WebCore::DeviceOrientationData>, WTF::DefaultRefDerefTraits<WebCore::DeviceOrientationData>>="m_ptr"^{DeviceOrientationData}};

@interface WebDeviceOrientationInternal : NSObject {
  /* instance variables */
  struct RefPtr<WebCore::DeviceOrientationData, WTF::RawPtrTraits<WebCore::DeviceOrientationData>, WTF::DefaultRefDerefTraits<WebCore::DeviceOrientationData>> { struct DeviceOrientationData *m_ptr; } m_orientation;
}

/* instance methods */
- (id)initWithCoreDeviceOrientation:(void *)orientation;
@end

#endif /* WebDeviceOrientationInternal_h */
