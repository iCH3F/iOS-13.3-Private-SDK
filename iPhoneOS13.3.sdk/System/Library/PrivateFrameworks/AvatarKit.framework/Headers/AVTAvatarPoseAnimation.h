//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTAvatarPose, NSDictionary;

@interface AVTAvatarPoseAnimation : NSObject
{
    AVTAvatarPose *_staticPose;
    NSDictionary *_staticPhysicsStates;
    NSDictionary *_blendshapeAnimations;
    NSDictionary *_perNodeAnimations;
}

+ (void)enumerateRepresentationsForAnimation:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
+ (id)animationFromRepresentation:(id)arg1 keyPath:(id)arg2;
+ (void)removeAllPoseAnimationsOnAvatar:(id)arg1;
@property(readonly, nonatomic) AVTAvatarPose *staticPose; // @synthesize staticPose=_staticPose;
// - (void).cxx_destruct;
- (void)applyOnAvatar:(id)arg1;
@property(readonly, nonatomic) double duration;
- (id)animationForAvatar:(id)arg1;
- (id)animatedPoseRepresentation;
- (id)staticPoseRepresentation;
- (id)initWithStaticPoseRepresentation:(id)arg1 animatedPoseRepresentation:(id)arg2 staticPhysicsStatesRepresentation:(id)arg3;
- (id)initWithStaticPose:(id)arg1 staticPhysicsStates:(id)arg2;
- (id)initWithScene:(id)arg1;
- (id)initWithSceneAtURL:(id)arg1;

@end

