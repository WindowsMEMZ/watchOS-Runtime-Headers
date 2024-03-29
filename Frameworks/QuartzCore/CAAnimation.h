//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1110.5.0.0.0
//
#ifndef CAAnimation_h
#define CAAnimation_h
@import Foundation;

#include "CAAction-Protocol.h"
#include "CAAnimationDelegate-Protocol.h"
#include "CAMediaTiming-Protocol.h"
#include "CAMediaTimingFunction.h"
#include "CAPropertyInfo-Protocol.h"
#include "CAStateControllerTransition.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface CAAnimation : NSObject<NSMutableCopying, CAPropertyInfo, NSSecureCoding, NSCopying, CAMediaTiming, CAAction> {
  /* instance variables */
  void * _attr;
  unsigned int _flags;
}

@property (weak, @dynamic) CAStateControllerTransition *CAStateControllerTransition;
@property BOOL enabled;
@property (copy) NSString *beginTimeMode;
@property double frameInterval;
@property long long preferredFramesPerSecond;
@property unsigned int highFrameRateReason;
@property BOOL discretizesTime;
@property float preferredFrameRateRangeMinimum;
@property float preferredFrameRateRangeMaximum;
@property float preferredFrameRateRangePreferred;
@property (retain) CAMediaTimingFunction *timingFunction;
@property (retain) NSObject<CAAnimationDelegate> *delegate;
@property BOOL removedOnCompletion;
@property struct CAFrameRateRange { float x0; float x1; float x2; } preferredFrameRateRange;
@property double beginTime;
@property double duration;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property BOOL autoreverses;
@property (copy) NSString *fillMode;

/* class methods */
+ (id)properties;
+ (undefined *)CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x0; unsigned int x1 :16; unsigned int x2 :16; SEL x3[2] char * x4; struct __CFString * x5; } *)property;
+ (undefined *)CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x0; unsigned int x1 :16; unsigned int x2 :16; SEL x3[2] char * x4; struct __CFString * x5; } *)property;
+ (BOOL)resolveInstanceMethod:(SEL)method;
+ (void)CAMLParserStartElement:(id)element;
+ (id)defaultValueForKey:(id)key;
+ (id)animation;
+ (BOOL)CA_encodesPropertyConditionally:(unsigned int)conditionally type:(int)type;
+ (BOOL)supportsSecureCoding;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;

/* instance methods */
- (void)setDefaultDuration:(double)duration;
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object;
- (struct Object { undefined * * x0; struct Atomic { struct { int x0; } x0; } x1; unsigned int x2 :8; unsigned int x3 :24; } *)CA_copyRenderValue;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (void)CAMLParser:(id)camlparser setValue:(id)value forKey:(id)key;
- (void)encodeWithCAMLWriter:(id)camlwriter;
- (id)CAMLTypeForKey:(id)key;
- (BOOL)CAMLTypeSupportedForKey:(id)key;
- (BOOL)isEnabled;
- (BOOL)isCompleteForTime:(double)time;
- (BOOL)_setCARenderAnimation:(void *)animation layer:(id)layer;
- (unsigned int)_propertyFlagsForLayer:(id)layer;
- (void)dealloc;
- (void)runActionForKey:(id)key object:(id)object arguments:(id)arguments;
- (BOOL)shouldArchiveValueForKey:(id)key;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)valueForKey:(id)key;
- (void)setValue:(id)value forKey:(id)key;
- (id)valueForUndefinedKey:(id)key;
- (void)setValue:(id)value forUndefinedKey:(id)key;
- (id)valueForKeyPath:(id)path;
- (void)setValue:(id)value forKeyPath:(id)path;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)debugDescription;
- (BOOL)isRemovedOnCompletion;
@end

#endif /* CAAnimation_h */
