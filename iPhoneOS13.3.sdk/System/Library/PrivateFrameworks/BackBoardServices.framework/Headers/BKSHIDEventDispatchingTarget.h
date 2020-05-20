//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventDispatchingTarget : NSObject <NSSecureCoding, NSCopying>
{
    BKSHIDEventDeferringEnvironment *_environment;
    int _pid;
}

+ (BOOL)supportsSecureCoding;
+ (id)focusTargetForPID:(int)arg1;
+ (id)targetForPID:(int)arg1 environment:(id)arg2;
+ (id)targetForDeferringEnvironment:(id)arg1;
+ (id)keyboardFocusTarget;
+ (id)systemTarget;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, copy, nonatomic) BKSHIDEventDeferringEnvironment *deferringEnvironment; // @synthesize deferringEnvironment=_environment;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_initWithEnvironment:(id)arg1 pid:(int)arg2;
- (id)init;

@end

