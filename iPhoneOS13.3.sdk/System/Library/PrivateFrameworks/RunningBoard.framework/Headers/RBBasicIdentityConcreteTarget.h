//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoard/RBConcreteTarget.h>

@class RBSProcessIdentity;

__attribute__((visibility("hidden")))
@interface RBBasicIdentityConcreteTarget : RBConcreteTarget
{
    RBSProcessIdentity *_identity;
}

- (id)identity;
// - (void).cxx_destruct;
- (id)description;
- (id)_initWithIdentity:(id)arg1;
- (id)createRBSTarget;
- (BOOL)isSystem;

@end

