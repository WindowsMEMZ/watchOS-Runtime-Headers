//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebScriptCallFramePrivate_h
#define WebScriptCallFramePrivate_h
@import Foundation;

@class WebScriptObject;
@protocol {String="m_impl"{RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>>="m_ptr"^{StringImpl}}};

@interface WebScriptCallFramePrivate : NSObject {
  /* instance variables */
  WebScriptObject *globalObject;
  struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } functionName;
  struct JSValue { union EncodedValueDescriptor { long long asInt64; struct JSCell *ptr; struct { int payload; int tag; } asBits; } u; } exceptionValue;
}

/* instance methods */
- (void)dealloc;
@end

#endif /* WebScriptCallFramePrivate_h */
